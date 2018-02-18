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

**(b)** The loop invariant for the for loop of line 2-4 can be stated as:  
*Initialization:* Loop is initialized with the last element and this should be the greatest element of the array. Also A[j] is the smallest element of the subarray A[j...n].  
*Maintenance:* For each iteration A[j] is the smallest element of the subarray A[j...n].  
*Termination:* Loop terminates when j = i+1. At this point first element is the smallest element as we swap A[j] = A[i+1] with A[j-1] = A[i].  

**(c)** TODO  

**(d)** Worst case running time of bubble sort is Θ(n<sup>2</sup>) because of the nested loop.  
Although running time of insertion sort is Θ(n<sup>2</sup>) same as bubble sort, the number of comparison and swapping is less in insertion sort than bubble sort. So the constant factor in the running time complexities of insertion sort is less than bubble sort. So insertion sort is little better than bubble sort.

***
### Exercise 2-3
**Correctness of Horner's rule**  
The following code fragment implements Horner’s rule for evaluating a polynomial  
P(x)=∑<sub>k=0 to n</sub> a<sub>k</sub>x<sup>k</sup>  
&nbsp; &nbsp; &nbsp; = a<sub>0</sub> + x(a<sub>1</sub> + x(a<sub>2</sub> +...+x(a<sub>n-1</sub> + xa<sub>n</sub>)...)),  
given the coefficients a<sub>0</sub>, a<sub>1</sub>, . . . , a<sub>n</sub> and a value for x:  
1 y = 0  
2 for i = n downto 0  
3 &nbsp; &nbsp; y = a<sub>i</sub> + x\*y  
**a.** In terms of Θ-notation, what is the running time of this code fragment for Horner’s rule? 

**b.** Write pseudocode to implement the naive polynomial-evaluation algorithm that computes each term of the polynomial from scratch. What is the running time of this algorithm? How does it compare to Horner’s rule?  

**c.** Consider the following loop invariant:  
At the start of each iteration of the for loop of lines 2–3,  
y = ∑<sub>k=0 to n-(i+1)</sub> a<sub>k+i+1</sub>x<sup>k</sup>  
Interpret a summation with no terms as equaling 0. Following the structure of the loop invariant proof presented in this chapter, use this loop invariant to show that, at termination, y = ∑<sub>k=0 to n</sub>a<sub>k</sub>x<sup>k</sup>.  

**d.** Conclude by arguing that the given code fragment correctly evaluates a polynomial characterized by the coefficients a<sub>0</sub>, a<sub>1</sub>, . . . , a<sub>n</sub>.
### `Answer`
**(a)** Θ(n)  

**(b)** 
```
a[] = {a0, a1, a2, ..., an}
Naive_poly_eval(a[],x)
    y = 0
    for i=0 to n
        m = 1
        for j=1 to i
            m = m*x
        y = y + a[i]*m
```
Running time of this algorithm is Θ(n<sup>2</sup>). Time complexity can be improved to Θ(nlgn) by using Θ(lgn) approach to evaluate x<sup>n</sup>.  
This algorithm is worse than Honor's rule as its time complexity is Θ(n).  

**(c)**
