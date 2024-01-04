/*

                                    Halloween & Chocolates

As halloween is around the corner, the children in the area decided to go take chocolates from
the neighbours. As a part of halloween the children gets dressed as character and recieve chocolates.

There are N houses in the area and k (1 ≤ k ≤ 100) children . Where the ith (0 ≤ i < n) 
house can provides Ai chocolates. Here Ai reperesents the number of chocolates the family member
of house can provide to k children. 

The house member has to distribute the chocolates in such a way that k children gets equal amount of
chocolates. Also after distributing equal chocolates among k children if any number of chocolates are 
remaining then the chocolates will be distributed as per the prefernce of children. 
You need to tell the number of chocolates with k children.

For Example : Let n = 5, number of houses, k = 4 number of children, chocolates n houses can provide:
a = [9, 5, 4, 2, 3];

After distributing the chocolates equally to the children.
1 -> 2, 1, 1, 0, 0
2 -> 2, 1, 1, 0, 0
3 -> 2, 1, 1, 0, 0
4 -> 2, 1, 1, 0, 0

Now distributing remaining chocolates as per the prefernce order of children
1 -> 1, 1, 0, 1, 1
2 -> 0, 0, 0, 1, 1
3 -> 0, 0, 0, 0, 1
4 -> 0, 0, 0, 0, 0

Total Number of chocolates with k children :
1st child -> 8, 2nd child -> 6, 3rd child -> 5, 4th child -> 4;
ans = [8, 6, 5, 4].

INPUTS :- 
The first line of input contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases. The description of test cases follows.

The first line of each test case contains four integers n, k (2 ≤ n ≤ 2*10^5, 1 ≤ k ≤ 100) — the nfumber of houses, 
the number of children.

The second line contains n distinct integers a1,a2,…,an (1 ≤ ai ≤n) — the number of chocolates ith house can distribute.

It is guarented that the sum of n over all test cases doesn't exceed 2*10^5.

OUTPUT :- 

Output the number of chocolates with each children in array of length of k.

Example :-

Input :-
3
5 4
9 5 4 2 3
4 2
5 0 7 4
1 1 
17

Output :-
8 6 5 4
9 7
17

Explaination :-

First test case explained in the problem statement. 

*/