# Competitive Programming

### Re-try Re-try Re-try...

| Problem | Date (DD-MM-YYYY) |
| :-: | :-: |
| [Rotate-Image](https://leetcode.com/problems/rotate-image/) | Try transpose matrix approach |
| [DIY Wooden Ladder-1197A](https://codeforces.com/contest/1197/problem/A) | 13-06-2022 |
| [Even But Not Even-1291A](https://codeforces.com/contest/1291/problem/A) | 13-06-2022 |
| [Elections-1593A](https://codeforces.com/contest/1593/problem/A) | 13-06-2022 |
| [Circle Metro-1169A](https://codeforces.com/contest/1169/problem/A) | 12-07-2022 |
| [Many Equal Substrings-1029A](https://codeforces.com/contest/1029/problem/A) | 28-07-2022 |
| [Permutation Operations-1746C](https://codeforces.com/contest/1746/problem/C) | 21-10-2022 |
| [Good Subarrays-1436C1](https://codeforces.com/problemset/problem/1736/C1) | 25-10-2022 |
| [3Sum Closure-1698C](https://codeforces.com/problemset/problem/1698/C) | 28-10-2022 |
| [Directional Increase-1693A](https://codeforces.com/problemset/problem/1693/A) | 08-11-2022 |
| [Masha and a Beautiful Tree-1741D](https://codeforces.com/contest/1741/problem/D) | 17-11-2022 |
| [Number Game-1741D](https://codeforces.com/contest/1749/problem/C) | 17-11-2022 |
| [Bricks and Bags-1740C](https://codeforces.com/contest/1740/problem/C) | 22-11-2022 |
| [Orray-1742G](https://codeforces.com/contest/1742/problem/G) | 26-01-2023 |
| [Absolute Sorting-1772D](https://codeforces.com/contest/1772/problem/D) | 26-01-2023 |
| [(Very nice binary search problem)Tea Tasting-1795C](https://codeforces.com/contest/1795/problem/C) | 19-02-2023 |
| [Min Max Sort-1792C](https://codeforces.com/contest/1792/problem/C) | 21-02-2023 |
| [(Very nice binary search problem)Maximum Set-1796C](https://codeforces.com/contest/1796/problem/C) | 01-03-2023 |
| [Scoring Subsequences-1795C](https://codeforces.com/contest/1794/problem/C) | 05-03-2023 |
| [Mex Master-1806B (Chi!)](https://codeforces.com/contest/1806/problem/B) | 23-03-2023 |
| [Sequence Master-1806C](https://codeforces.com/contest/1806/problem/C) | 24-03-2023 |
| [Candy Store-1798C](https://codeforces.com/contest/1798/problem/C) | 28-03-2023 |
| [Make It Permutation-1810C](https://codeforces.com/contest/1810/problem/C) | 01-04-2023 |



### Very Nice Techniques

| Issue | Resource/Idea | Related Problem | 
| :-: | :-: | :-: |
| Rotate square matrix in anti-clockwise direction by 90 degrees | [gfg link](https://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/) | [cf - Mirror Grid](https://codeforces.com/contest/1703/problem/E) |
| Rotate square matrix in clockwise direction by 90 degrees | [gfg link](https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/) | Same |
| For very large number like 10e18, determine the floor of square root using Binary Search. Built-in function sqrt may give wrong answer | None | [My code](https://github.com/SJMormo/competitive-programming/blob/main/codeforces/1737B.cpp) |
| Minimum swaps needed to sort a permutation | Let's build a directed graph with n vertices where the i-th vertex has an outgoing edge i→pi. It is easy to see that the graph is divided up into cycles of the form i→pi→ppi→pppi→…→i. The elements of a particular graph need (total_cycle - 1) swaps to be sorted | [Related Problem](https://codeforces.com/contest/1768/problem/D) |
| Runtime in unordered_map | If possible, initializing the map is far better than assigning values over and over again | [Problematic](https://leetcode.com/problems/roman-to-integer/submissions/886203495/), [Better](https://leetcode.com/problems/roman-to-integer/submissions/886204018/) |