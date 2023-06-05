/*
* Queue.cpp
* 
* Leonard K. Ebron
*
* Monday, 5TH June 2023
*/


//////////////////////////////////////////////////////////////////////////QUEUE.CPP APP SUMMARY//////////////////////////////////////////////////////////////////////////////////////


  // Provide definitions neeeded to instantiate a queue type object.


//////////////////////////////////////////////////////////////////////////QUEUE.CPP APP DEPENDENCIES//////////////////////////////////////////////////////////////////////////////////////


#include"Queue.h"


//////////////////////////////////////////////////////////////////QUEUE CLASS CONSTRUCTOR & DESTRUCTOR DEFINITIONS//////////////////////////////////////////////////////////////////////////////////////


// Queue default constructor definition.
Queue::Queue()
{


      // Initialize records.
      queueLength = SIZE;
      front = - 1;
      rear = - 1;

}


// Define insert value into queue.
void Queue::insert(int value)
{

    if (rear == queueLength - 1)
    {
    // Queue in overflow condition.
    }
    else 
    {


    if (front == - 1)
    {
        // Update front of queue to allow insertion of elements.
        front = 0;
    }

    // Rear changes due to insertion of value.
    rear++;
    queue[rear] = value;

    }


}


// Define: delete element from queue.
void Queue::_delete()
{


    if (front == - 1 || front > rear) 
    {
        // Queue underflow condition.
        return ;
    } 
    else 
    {
        front++;;
    }


}


// Define: display queue elements.
void Queue::display()
{


    if (front == - 1)
    {
    // Queue empty condition.
    }
    else 
    {

        // Print out elements in array.
        Serial.println("Queue elements are : \n");
        for (int i = front; i <= rear; i++)
        {
            Serial.print("(");
            Serial.println(i);
            Serial.println(" ");
            Serial.println(queue[i]);
            Serial.println(" \n");

        }


    }


}