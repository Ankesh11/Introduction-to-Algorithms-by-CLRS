***
### Problem 3-1
**Asymptotic behavior of polynomials**  
Let  
![](https://latex.codecogs.com/png.latex?p%28n%29%3D%5Csum_%7Bi%3D0%7D%5E%7Bd%7Da_%7Bi%7Dn%5E%7Bi%7D),  
where ![](https://latex.codecogs.com/png.latex?a_%7Bd%7D%3E%200), be a degree-d polynomial in n, and let k be a constant. Use the
definitions of the asymptotic notations to prove the following properties.  
**a.** If k >= d, then p(n) = O(n<sup>k</sup>).  
**b.** If k <= d, then p(n) = Ω(n<sup>k</sup>).  
**c.** If k = d, then p(n) = Θ(n<sup>k</sup>).  
**d.** If k > d, then p(n) = o(n<sup>k</sup>).  
**e.** If k < d, then p(n) = ω(n<sup>k</sup>).
### `Answer`
p(n) = a<sub>0</sub> + a<sub>1</sub>n + a<sub>2</sub>n<sup>2</sup> + . . . + a<sub>d</sub>n<sup>d</sup>  
**a.** p(n) <= cn<sup>k</sup>, if k >= d and c > 0  
So, p(n) = O(n<sup>k</sup>)  
**b.** p(n) >= cn<sup>k</sup>, if k <= d and c > 0  
So, p(n) = Ω(n<sup>k</sup>)  
**c.** c<sub>1</sub>n<sup>k</sup> <= p(n) <= c<sub>2</sub>n<sup>k</sup>, if k = d and c<sub>1</sub>,c<sub>2</sub> > 0  
So, p(n) = Θ(n<sup>k</sup>)  
**d.** p(n) < cn<sup>k</sup>, if k > d and c > 0  
So, p(n) = o(n<sup>k</sup>)  
**e.** p(n) > cn<sup>k</sup>, if k < d and c > 0   
So, p(n) = ω(n<sup>k</sup>)  

***
### Problem 3-2
**Relative asymptotic growths**  
Indicate for each pair of expressions (A,B) in the table below, whether A is O, o, Ω, ω, or Θ of B. Assume that k≥1, ϵ>0, and c>1 are 
constants. Your answer should be in the form of the table with "yes" or "no" written in each box.
### `Answer`
TODO
<!---
A | B | O | o | Ω | ω | Θ 
:----:|:----:|:----:|:----:|:----:|:----:|:----:
![](http://latex.codecogs.com/gif.latex?\\lg^kn) | ![](http://latex.codecogs.com/gif.latex?n^\\epsilon) | yes | yes | no | no | no
![](https://latex.codecogs.com/png.latex?n%5E%7Bk%7D) | ![](http://latex.codecogs.com/gif.latex?c^n) | yes | yes | no | no | no
![](http://latex.codecogs.com/gif.latex?\\sqrt{n}) | ![](http://latex.codecogs.com/gif.latex?n^\\sin{n}) | no | no | no | no | no
![](http://latex.codecogs.com/gif.latex?\\2^n) | ![](http://latex.codecogs.com/gif.latex?2^{n/2}) | no | no | yes | yes | no
![](http://latex.codecogs.com/gif.latex?n^\\lg{c}) | ![](http://latex.codecogs.com/gif.latex?c^\\lg{n}) | yes | no | yes | no | yes
![](http://latex.codecogs.com/gif.latex?\\lg{\(n!\)}) | ![](http://latex.codecogs.com/gif.latex?\\lg{\(n^n\)}) | yes | no | yes | no | yes
--->  

***
Problem 3-3
**Ordering by asymptotic growth rates**  
