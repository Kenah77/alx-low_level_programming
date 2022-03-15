<<<<<<< HEAD
 
 ​#​include​ ​<​stdio.h​> 
=======
  ​#​include​ ​<​stdio.h​> 
>>>>>>> 5e2c569ca029be899919e6d3545fb497f71efec5
  
 ​/*​* 
 ​ * main - print first 50 Fibonacci numbers 
 ​ * 
 ​ * Return: always 0 
 ​ ​*/ 
 ​int​ ​main​(​void​) 
 ​{ 
 ​        ​int​ i; 
 ​        ​unsigned​ ​long​ a = ​1​; 
 ​        ​unsigned​ ​long​ b = ​2​; 
 ​        ​unsigned​ ​long​ c = ​3​; 
 ​        ​unsigned​ ​long​ sum = ​2​; 
  
 ​        ​for​ (i = ​0​; c < ​4000000​; i++) 
 ​        { 
 ​                c = a + b; 
 ​                ​if​ (c % ​2​ == ​0​) 
 ​                        sum += c; 
 ​                a = b; 
 ​                b = c; 
 ​        } 
 ​        ​printf​(​"​%ld​\n​"​, sum); 
  
 ​        ​return​ (​0​); 
 ​}
