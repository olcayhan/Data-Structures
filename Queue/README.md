# Queue with Linked List


 Firstly, we need to create a Node class for dealing with linked list. Node class have two attributes data which is an integer number and next which is pointer.
Secondly, we need to create a Queue class. Queue class have two attributes front and tail both of them are pointer. We have methods, 

## Enqueue method: 
Enqueue method is adding new node the front of the queue.

   ![image](https://user-images.githubusercontent.com/71206063/206733898-91cbe928-e744-4bcf-9645-577906de241d.png)

 
## Dequeue method: 
Dequeue method is deleting the top node of the queue, if there is no node in array then it says queue is empty.

![image](https://user-images.githubusercontent.com/71206063/206733924-a1005551-1746-45d2-996c-471face5ffe5.png)

     
## GetFront method: 
GetFront method is return value of the front of queue, if there is no node in array then it says queue is empty.

![image](https://user-images.githubusercontent.com/71206063/206733957-eeb9a0e7-cd80-4a08-8d5f-9abcef1d3900.png)

                         
## Size method: 
Size method is return an integer that is size of the queue help by counter.
      	      		   
## IsEmpty method: 
IsEmpty method is check queue wheter is empty or not. If is empty return true   otherwise false.

## FindMaxValue method: 
FindMaxValue method is get maximum value from the queue. There is a temp node which is indicate tail node for get all values in the queue.

![image](https://user-images.githubusercontent.com/71206063/206734112-5bb4cc94-c5bd-4c0f-9f27-958f9bc56ee9.png)

			 
We have an integer variable namely max which is initially take -2147483648 value, this value is minimum integer number in C++.

There is a while loop for get values from the queue. In the while loop, there is an if condition for checking temp value is bigger than max value or not. If temp value is bigger than max then max is now equal to temp value. 

![image](https://user-images.githubusercontent.com/71206063/206734157-bfac6682-aea5-443b-8ce1-15dfe643cac7.png)

Finally, we return the max variable that is storing the biggest number in the queue.



    
