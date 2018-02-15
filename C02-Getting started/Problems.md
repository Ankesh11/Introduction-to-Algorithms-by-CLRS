***
### Exercise 2-1
**Insertion sort on small array in merge sort**  
Although merge sort runs in Θ(n lg n) worst-case time and insertion sort runs in Θ(n^2) worst- case time, the constant factors in insertion 
sort make it faster for small n. Thus, it makes sense to use insertion sort within merge sort when subproblems become sufficiently small.
Consider a modification to merge sort in which n/k sublists of length k are sorted using insertion sort and then merged using the standard 
merging mechanism, where k is a value to be determined.

**a.** Show that the n/k sublists, each of length k, can be sorted by insertion sort in Θ(nk) worst-case time.

**b.** Show how to merge the sublists in Θ(n lg (n/k)) worst-case time.

**c.** Given that the modified algorithm runs in Θ(nk + n lg (n/k)) worst-case time, what is the largest value of k as a function of n for 
which the modified algorithm has the same asymptotic running time as standard merge sort, in terms of Θ-notation?

**d.** How should k be chosen in practice?
### `Answer`
**(a)** T(n) = (n/k)\*Θ(k<sup>2</sup>) = Θ(nk)  

**(b)** If there are n/k sublists, then the height of the tree formed will be lg(n/k). And at each level of the tree, the complexity of
merging is Θ(n). So the worst case to merge the sublists is Θ(n lg(n/k)).  

**(c)** Θ(nk + nlg(n/k)) = Θ(nk + nlgn - nlgk)) should be equal to Θ(nlgn)  
To satisfy this, `k` cannot grow faster than `lgn`, otherwise `nk` term will run worse than `Θ(nlgn)`. So `k <= Θ(lgn)` to satisfy the above condition.
So largest value of `k = lgn`.  

**(d)** Time complexity of insertion sort = c<sub>1</sub>n<sup>2</sup> and the time complexity of merge sort is c<sub>2</sub>nlgn.  
To find the value of k  
c<sub>1</sub>k<sup>2</sup> <= c<sub>2</sub>klgk  
k <= (c<sub>2</sub>/c<sub>1</sub>)lgk  
Now we can check manually by putting different values of k.

***
### Exercise 2-2
**Correctness of bubble sort**  
Bubblesort is a popular, but inefficient, sorting algorithm. It works by repeatedly swapping adjacent elements that are out of order.
```
BUBBLESORT(A)
1 for i = 1 to A:length - 1
2    for j = A:length downto i + 1
3        if A[j] < A[j-1]
4            exchange A[j] with A[j-1]
```
**a.** Let A' denote the output of BUBBLESORT(A). To prove that BUBBLESORT is correct, we need to prove that it terminates and that
A'[1] <= A'[2] <= ... <= A'[n] , 
where n = A:length. In order to show that BUBBLESORT actually sorts, what else do we need to prove?
The next two parts will prove the above inequality.  

**b.** State precisely a loop invariant for the for loop in lines 2–4, and prove that this loop invariant holds. Your proof should use 
the structure of the loop invariant proof presented in this chapter.  

**c.** Using the termination condition of the loop invariant proved in part (b), state a loop invariant for the for loop in lines 1–4 
that will allow you to prove above inequality. Your proof should use the structure of the loop invariant proofpresented in this chapter.  

**d.** What is the worst-case running time of bubblesort? How does it compare to the running time of insertion sort?
### `Answer`
**(a)** TODO  

**(b)** 
