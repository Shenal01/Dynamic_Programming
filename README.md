# Dynamic_Programming
This is a C code for Grid problems - solution with dynamic programming approach. This is a assignment that I did for my Foundations of Algorithm module.

Dynamic Programming: Unraveling Optimal Solutions

<pre>Dynamic programming (DP) is a powerful problem-solving technique used in computer science and mathematics. Unlike its name suggests, DP isn’t about being “dynamic” in the usual sense; rather, it’s about breaking down complex problems into smaller subproblems and efficiently solving them.</pre>

Key points about dynamic programming:

Overlapping Subproblems:
<pre>
DP tackles problems with overlapping subproblems. These subproblems recur multiple times during the solution process.
By storing solutions to subproblems, DP avoids redundant computations.</pre>
  

Optimal Substructure:

  <pre>DP problems exhibit optimal substructure, meaning that an optimal solution can be constructed from optimal solutions to smaller subproblems.
  The “divide and conquer” approach is central to DP.</pre>

Memoization and Tabulation:

<pre>
  DP can be implemented using either memoization (top-down) or tabulation (bottom-up).
  Memoization involves caching intermediate results, while tabulation builds a table of solutions iteratively.</pre>

Applications:

DP is widely used in various domains:

 <pre>
<ol>
<li>  Fibonacci sequence: Computing Fibonacci numbers efficiently.</li>
<li>  Shortest paths: Finding the shortest path in graphs (e.g., Dijkstra’s algorithm). </li>
<li>  String alignment: Solving problems like edit distance and longest common subsequence. </li>
<li>  Knapsack problem: Optimizing resource allocation. </li>
</ol></pre>

Challenges:
<pre>
Identifying subproblems and defining recurrence relations can be tricky.
However, mastering DP opens doors to elegant solutions for complex problems.</pre>

<h2>Question</h2>

<pre>
You are given a N * M grid in which each cell consists of either 0 or 1. A cell (i,j) is blocked if
its value is 1. Standing at a cell (i,j), you can perform the following steps.
1. You can move right to the very next cell which is not blocked.
2. You can move down to the very next cell which is not blocked.
You are initially located at cell (1,1). Determine the number of ways in which you can
reach (N,M) starting from your initial location.
</pre>
