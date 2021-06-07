Vlad enjoys listening to music. He lives in Sam's Town.
  A few days ago he had a birthday, so his parents gave him a gift: MP3-player! Vlad was the happiest man in the world! 
    Now he can listen his favorite songs whenever he wants!

Vlad built up his own playlist. The playlist consists of N songs, 
each has a unique positive integer length. Vlad likes all the songs from his playlist, 
but there is a song, which he likes more than the others. It's named "Uncle Johny".

After creation of the playlist, Vlad decided to sort the songs in increasing order of their lengths. 
  For example, if the lengths of the songs in playlist was {1, 3, 5, 2, 4} after sorting it becomes {1, 2, 3, 4, 5}. 
    Before the sorting, "Uncle Johny" was on K-th position (1-indexing is assumed for the playlist) in the playlist.

Vlad needs your help! He gives you all the information of his playlist. 
    Your task is to find the position of "Uncle Johny" in the sorted playlist.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains one integer N denoting the number of songs in Vlad's playlist. 
  The second line contains N space-separated integers A1, A2, ..., AN denoting the lenghts of Vlad's songs.
  The third line contains the only integer K - the position of "Uncle Johny" in the initial playlist.
 

Output
For each test case, output a single line containing the position of "Uncle Johny" in the sorted playlist.
 

Constraints
1 ≤ T ≤ 1000
1 ≤ K ≤ N ≤ 100
1 ≤ Ai ≤ 109
 

Example
Input:
3
4
1 3 4 2
2
5
1 2 3 9 4
5
5
1 2 3 9 4 
1

Output:
3
4
1
 
  
  
  //////    CODE    ////
  
  #include <bits/stdc++.h> 
using namespace std; 

int main()
{
  int t;
  cin>>t;
  while(t--) 
  {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
     }
     int k, id;
     cin>>k;
     int x=a[k-1];
     sort(a, a+n);
     for(int i=0;i<n;i++)
     {
       if(a[i]==x)
         id=i+1;
     }
     cout<<id<<endl;
  }
}
