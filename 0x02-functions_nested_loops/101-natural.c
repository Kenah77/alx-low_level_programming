<<<<<<< HEAD
 
 ​#​include​ ​<​stdio.h​> 
  
 ​/*​* 
 ​ * main - prints sum of all numbers under 1024 divisible by 3 and 5 
 ​ * 
 ​ * Return: always 0 
 ​ ​*/ 
 ​int​ ​main​(​void​) 
 ​{ 
 ​        ​int​ i; 
 ​        ​int​ sum = ​0​; 
  
 ​        ​for​ (i = ​0​; i < ​1024​; i++) 
 ​        { 
 ​                ​if​ ((i % ​3​ == ​0​) || (i % ​5​ == ​0​)) 
 ​                        sum = sum + i; 
 ​        } 
 ​        ​printf​(​"​%i​\n​"​, sum); 
=======
  ​#​include​ ​<​stdio.h​> 
 ​/*​* 
 ​ * main - entry point 
 ​ * Description:program prints the sum of all the multiples of 3 or 5 
 ​ * Return: void 
 ​ *​*/ 
 ​int​ ​main​(​void​) 
 ​{ 
 ​        ​int​ n, s  = ​0​; 
  
 ​        ​for​ (n = ​3​; n < ​1024​; n++) 
 ​        { 
 ​                ​if​ ((n % ​3​ == ​0​) || (n % ​5​ == ​0​)) 
 ​                { 
 ​                        s = s + n; 
 ​                } 
 ​        } 
 ​        ​printf​(​"​%d​\n​"​, s); 
>>>>>>> 5e2c569ca029be899919e6d3545fb497f71efec5
  
 ​        ​return​ (​0​); 
 ​}
