//this brute force is to understand the problem statement where optimal solution fot this code have't wriiten


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ticket_avail, no_of_customer;
    cin >> ticket_avail >> no_of_customer;

    int arr[ticket_avail];
    int arr2[no_of_customer];

    for (int i = 0; i < ticket_avail; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < no_of_customer; i++)
    {
        cin >> arr2[i];
    }

    vector<int> alotted;

    for (int i = 0; i < no_of_customer; i++)
    {
        int bestTicket = -1;
        int bestIndex = -1;

        for (int j = 0; j < ticket_avail; j++)
        {
            if (arr[j] != 0 && arr[j] <= arr2[i] && arr[j] > bestTicket)
            {
                bestTicket = arr[j];
                bestIndex = j;
            }
        }

        alotted.push_back(bestTicket);

        if (bestIndex != -1)
        {
            arr[bestIndex] = 0;   // mark ticket as sold
        }
    }

    // Print the allotted tickets
    for (int i = 0; i < alotted.size(); i++)
    {
        cout << alotted[i] << endl;
    }

    return 0;
}