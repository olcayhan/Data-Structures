# Doubly Linked List

Firstly, we need to create a new class for nodes. This class has data, next and prev attributes. Data is integer value of array, next is next node in array and prev is previous node in array.
   
   ![image](https://user-images.githubusercontent.com/71206063/198893756-3bfbf074-031d-4f60-bf26-83b9cc5dd62d.png)

Secondly, we have to create a new class namely LinkedList. This class has head and tail attributes. Head attribute is indicated to the first node in array, tail attribute is indicated to tail (last) node in 
array, we give NULL value for initialization.
 
  ![image](https://user-images.githubusercontent.com/71206063/198893772-9063744d-34a0-40e6-87d6-53e70b4da66a.png)

## Insert at head function: 
Firstly, we create a new function that takes an integer data parameter for adding nodes in the head of the array. We create a new node namely newNode and we create a temp node with his indicated head. Next of newNode indicated head of array and prev of newNode indicated NULL. 
 
   ![image](https://user-images.githubusercontent.com/71206063/198893803-1744f98e-54ff-4ca2-a0e1-a4ce1dce24ab.png)

If head is not NULL, the prev of temp indicates newNode. If head is NULL, tail indicates newNode. Head indicates newNode as well.
 
  ![image](https://user-images.githubusercontent.com/71206063/198893834-f337c153-ab85-4550-b827-b031c3eb0c31.png)


## Insert at tail function: 
Firstly, we create a new function that takes an integer data parameter for adding nodes in the tail of the array. We create a new node namely newNode and we create a temp node with an indicated tail. Next of newNode indicated NULL and prev of newNode indicated temp.
 
  ![image](https://user-images.githubusercontent.com/71206063/198893857-e4337ee1-1287-4582-82d5-520c9d0528c8.png)

Next of temp and tail indicates newNode.

  ![image](https://user-images.githubusercontent.com/71206063/198893866-108f6a30-080d-4b01-96fb-8deb5130ada1.png)

 
## Insert at specific function: 
Firstly, we create a new function that takes an integer data and int position for parameters. We create a new node namely newNode and we create a before node with his indicated head. We go to a given position with a for loop and before node indicates next of before. We create an after node that is indicated next of before node. Prev of newNode indicated before node and next of newNode indicated after node. Finally next of before node and prev of the after node indicated newNode.
 
 ![image](https://user-images.githubusercontent.com/71206063/198893872-3e1563e5-dc65-4908-93de-14961212919c.png)

 
## Remove at Head function: 
Firstly, we create a new function. We create a temp node that indicates the head. Head indicated next of head. Prev of head and next of temp are indicated NULL values. Finally delete temp for delete memory.
 
   ![image](https://user-images.githubusercontent.com/71206063/198893881-99b2d355-301d-4f92-84be-941b2157c16e.png)

 
## Remove at Tail function: 
Firstly, we create a new function. We create a temp node that indicates tail. Tail indicated prev of tail. Prev of temp and next of tail are indicated NULL value. Finally delete temp for delete memory.

  ![image](https://user-images.githubusercontent.com/71206063/198893895-55754a4c-c1a7-47f1-8f78-66ce22b126e1.png)


## Get front item function: 
We only print data of head that is indicated front item.

## Get tail item function: 
We only print data of tail that is indicated tail item.

  ![image](https://user-images.githubusercontent.com/71206063/198893905-a9896549-5568-49b3-afc7-35c5a3466ccb.png)



## Remove all items function: 
Firstly, we create a new function. We create a temp node that indicates tail. Temp go to prev of temp and delete temp while temp is indicated not NULL. Finally, head and tail indicated NULL value. 
 
![image](https://user-images.githubusercontent.com/71206063/198893923-5d4e2278-227e-4d5d-b551-c26db1c91cea.png)


## Running

Finally, we generate main function, we create a new LinkedList object namely list. 

### We call insertAtHead(1) function:
		 
  ![image](https://user-images.githubusercontent.com/71206063/198893999-d8e07a09-e95f-4ce0-ba2c-1c3e1190dcb5.png)

     
### We call insertAtTail(2) function:

  ![image](https://user-images.githubusercontent.com/71206063/198894017-edd3dd36-bc02-4710-acf5-39932fd46e76.png)

	 
### We call insertAtSpec(1,5) function:  (second position is equal to 1.index)

  ![image](https://user-images.githubusercontent.com/71206063/198894026-cc5292b5-b0fb-450d-8382-537a8cc2cf2f.png)

	 
### We call getFrontItem() function: 

  This function print data of head, so data of head is 1.

### We call getTailItem() function: 

  This function print data of tail, so data of tail is 2.

### We call removeAtHead() function:

![image](https://user-images.githubusercontent.com/71206063/198894034-574d0cfb-128b-4eef-82fe-da13170762fc.png)

	 
### We call removeAtTail() function:

![image](https://user-images.githubusercontent.com/71206063/198894036-d935eefc-96c8-4f35-be39-c0f23c9c0232.png)

 
We call removeAllItems() function:

  This function removes all items in the array, so 5 is deleted in the array and the list is cleared.
