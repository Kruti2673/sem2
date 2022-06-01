// Atlassian.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <mutex>
#include <thread>
#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>
#include <list>


using namespace std;

class Constarints
{
    private:
        int maxRequest;
        int duration;
    
    public:
        void setRequest(int maxRequest)
        {
            this->maxRequest = maxRequest;
        }

        void setDuration(int duration)
        {
            this->duration = duration;
        }

        int getRequest()
        {
            return this->maxRequest;
        }

        int getDuration()
        {
            return this->duration;
        }
};

unordered_map<int, queue<int>> userRequestsMap; // space: O(n)*O(m) ~O(m)
Constarints* constraints = new Constarints(); // Time: O(c)+O(m)


bool isRequestAllowed(int customerId, time_t seconds)
{
    int slindingWindowSize = constraints->getDuration();
    int requestsAllowes = constraints->getRequest();

    if (userRequestsMap[customerId].size() < requestsAllowes)
    {
        userRequestsMap[customerId].push(seconds);
    }
    else if (userRequestsMap[customerId].size() == requestsAllowes && 
        seconds - userRequestsMap[customerId].front() <= slindingWindowSize)
    {
        return false;
    }
    else if (userRequestsMap[customerId].size() == requestsAllowes &&
        seconds - userRequestsMap[customerId].front() > slindingWindowSize)
    {
        while (!userRequestsMap[customerId].empty() &&
            seconds - userRequestsMap[customerId].front() > slindingWindowSize)
        {
            userRequestsMap[customerId].pop();
        }
        userRequestsMap[customerId].push(seconds);
    }

    return true;
}

bool rateLimit(int customerId)
{
     time_t seconds;

     seconds = time(NULL);
     return isRequestAllowed(customerId, seconds);
};

void TestCases()
{
    cout <<"Request for 1:" << rateLimit(1)<<endl;
    cout << "Request for 2:"  << rateLimit(2) << endl;
    cout << "Request for 1:" << rateLimit(1) << endl;
    cout << "Request for 1:"  << rateLimit(1) << endl;
    cout << "Request for 2:" << rateLimit(2) << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(11000));
    cout << "Request for 1:" << rateLimit(1) << endl;
}

int main()
{
    constraints->setDuration(10);
    constraints->setRequest(3);
    TestCases();
    //time_t seconds;

    //seconds = time(NULL);
    //cout << seconds << endl;
    //cout << "Hello World!\n";
}
