#include <bits/stdc++.h> 
using namespace std; 

class Meeting 
{ 
    public:
	    int start, finish, priority; 
}; 

// to store subset of jobs 
class priorityMeetings 
{ 
    public:
        vector<Meeting> meeting; 
        int value; 
}; 

bool comp(Meeting s1, Meeting s2) 
{ 
	return (s1.finish < s2.finish); 
} 

int nonConflicktingMeetings(Meeting jobs[], int index) 
{ 
	int start = 0, end = index - 1; 

	while (start <= end) 
	{ 
		int mid = (start + end) / 2; 
		if (jobs[mid].finish <= jobs[index].start) 
		{ 
			if (jobs[mid + 1].finish <= jobs[index].start) 
				start = mid + 1; 
			else
				return mid; 
		} 
		else
			end = mid - 1; 
	} 

	return -1; 
} 

int equalPriorityMeetingScheduler(Meeting arr[], int n) 
{ 
	sort(arr, arr + n, comp); 
	priorityMeetings DP[n]; 

	DP[0].value = arr[0].priority; 
	DP[0].meeting.push_back(arr[0]); 

	for (int i = 1; i < n; i++) 
	{ 
		int inclProf = arr[i].priority; 
		int l = nonConflicktingMeetings(arr, i); 
		if (l != - 1) 
			inclProf += DP[l].value; 

		if (inclProf > DP[i - 1].value) 
		{ 
			DP[i].value = inclProf; 

			DP[i].meeting = DP[l].meeting; 
			DP[i].meeting.push_back(arr[i]); 

		} 
		else
			DP[i] = DP[i - 1]; 
	} 

	cout << "Meetings\n" ; 
	for (int i=0; i<DP[n-1].meeting.size(); i++) 
	{ 
		Meeting j = DP[n-1].meeting[i]; 
		cout << j.start << ", " << j.finish << "\n"; 
	}
} 

int main() 
{ 
	Meeting arr[] = {{1200, 1800, 1}, {1230, 1300, 1}, {1300, 1500, 1}, 
		{1500, 1800, 1} }; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	equalPriorityMeetingScheduler(arr, n); 

	return 0; 
} 
