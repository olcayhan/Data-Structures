# Stack with Singly Linked List
 Firstly, we need to create a Node class for dealing with linked list. Node class have two attributes data which is an integer number and next which is pointer.
Secondly, we need to create a Stack class. Stack class have two attributes head and top both of them are pointer. We have methods, 

## Push method:
Push method is adding new node the top of the stack.

![image](https://user-images.githubusercontent.com/71206063/205454496-ef5d7299-a622-4f47-b3ab-82a64abbaf50.png)

    
## Pop method: 
Pop method is deleting the top node of the stack, if there is no node in array then it says stack is empty.

![image](https://user-images.githubusercontent.com/71206063/205454507-9841fdab-558d-40a0-838f-001442773f59.png)

     
## GetTop method: 
GetTop method is return value of the top of stack, if there is no node in array then it says stack is empty.

![image](https://user-images.githubusercontent.com/71206063/205454510-d7d8ba14-ef7d-4db6-b9c5-b56fe8d082da.png)

 
## Size method: 
Size method is return an integer that is size of the stack help by counter.

![image](https://user-images.githubusercontent.com/71206063/205454513-61078bc9-2afa-4606-8851-3de4fb18568e.png)

      	      		    
## IsEmpty method: 
IsEmpty method is check stack wheter is empty or not. If is empty return true   otherwise false.



## Concat method: 
Concat method is return a stack which is consist of sorted LL (min on top) and it takes two parameters whose are stackes which is sorted LL (min on top ).
There are two sorted stackes, size of them are don’t matter.

![image](https://user-images.githubusercontent.com/71206063/205454516-88584b84-6f42-4726-8cca-8c3f2d5a01f7.png)

		      	   
We push the nodes in order. If top of stack 1 bigger than stack 2 then we push the stack 2 and pop the stack 2, otherwise we push the stack 1 and pop the stack 1 . We call this stack as namely temp stack.

![image](https://user-images.githubusercontent.com/71206063/205454526-4b227664-a72a-46fe-bb0d-bb397cdf5a7e.png)

    
We need to reverse this stack for min on top rule. Because of that, we need create a new stack as namely reversed stack. We push the top value of the temp stack and we pop the temp stack for other values.

![image](https://user-images.githubusercontent.com/71206063/205454531-115e6552-de84-4755-859b-953dc6420649.png)

  		  
