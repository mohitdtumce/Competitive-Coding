#include <bits/stdc++.h>
using namespace std;
#define MeetingSize 5
#define EmployeeCount 10
class meeting
{
  public:
    string meetingName, organizerName;
    int startTime, endTime, attendees, organizerPriority;
    bool willAttend;

    void setData(string meetingName, int startTime, int endTime, int attendees, int organizerPriority, string organizerName)
    {
        this->meetingName = meetingName;
        this->startTime = startTime;
        this->endTime = endTime;
        this->attendees = attendees;
        this->organizerPriority = organizerPriority;
        this->organizerName = organizerName;
        this->willAttend = false;
    }
};

bool comp(meeting a, meeting b)
{
    if (a.organizerPriority < b.organizerPriority)
    {
        return true;
    }
    else if (a.organizerPriority > b.organizerPriority)
    {
        return false;
    }
    else
    {
        return (a.attendees < b.attendees);
    }
}

bool comp1(meeting a, meeting b)
{
    return a.startTime < b.startTime;
}

bool comp2 (meeting a, meeting b) {
    if (a.startTime < b.startTime)
        return true;
    else if (a.startTime > b.startTime)
        return false;
    else {
        return a.endTime < b.endTime;
    }
}

bool checkIfFree(bool *busy, int startTime, int endTime)
{
    for (int i = startTime; i <= endTime; i++)
    {
        if (busy[i])
        {
            return false;
        }
    }
    return true;
}

bool formatConvertor(string time)
{
}

int getEmployeePriority(string designation)
{
    if (designation == "CEO")
        return 0;
    else if (designation == "COO")
        return 1;
    else if (designation == "DIRECTOR")
        return 2;
    else if (designation == "MANAGER")
        return 3;
    else
        return INT_MAX;
}
int main()
{
    map<string, int> rank;
    string empName, empDesignation;
    for (int i = 0; i < EmployeeCount; i++)
    {
        cin >> empName >> empDesignation;
        rank.insert(make_pair(empName, getEmployeePriority(empDesignation)));
    }

    string employee;
    cin>>employee;
    string organizer, meetingName;
    int startTime, endTime, attendees, organizerPriority;
    vector<meeting> M(MeetingSize);
    rank[employee] = -1;
    for (int i = 0; i < MeetingSize; i++)
    {
        cin >> meetingName >> startTime >> endTime >> attendees >> organizer;
        M[i].setData(meetingName, startTime, endTime, attendees, rank[organizer], organizer);
    }

    // for (int i = 0; i < MeetingSize; i++) {
    //     cout<<M[i].meetingName<<" "<< M[i].startTime<<" "<<M[i].endTime<<" "<<M[i].attendees<<" "<<M[i].organizerPriority<<"\n";
    // }

    sort(M.begin(), M.end(), comp);
    // for (int i = 0; i < MeetingSize; i++) {
    //     cout<<M[i].meetingName<<" "<< M[i].startTime<<" "<<M[i].endTime<<" "<<M[i].attendees<<" "<<M[i].organizerPriority<<"\n";
    // }

    int timer = 0, index = 1;
    M[0].willAttend = true;
    timer = M[0].endTime;

    bool busy[2400] = {};
    while (timer <= 2400 && index < MeetingSize)
    {
        if (M[index].startTime > timer)
        {
            M[index].willAttend = true;
            timer = M[index].endTime;
            for (int i = M[index].startTime; i <= M[index].endTime; i++)
            {
                busy[i] = true;
            }
        }
        index++;
    }

    for (int i = 0; i < MeetingSize; i++)
    {
        if (M[i].willAttend == false && checkIfFree(busy, M[i].startTime, M[i].endTime))
        {
            M[i].willAttend = true;
        }
    }

    sort(M.begin(), M.end(), comp1);
    for (int i = 0; i < MeetingSize; i++)
    {
        if (M[i].willAttend)
        {
            cout << M[i].meetingName << ", " << M[i].startTime << ", " << M[i].endTime << ", " << M[i].attendees << ", " << M[i].organizerName << "\n";
        }
    }
    return 0;
}