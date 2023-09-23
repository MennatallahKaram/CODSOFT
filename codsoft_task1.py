flag = True
ToDoList = []
DoneList = []

while flag:
 print("===== To-Do List Application =====")
 print("1.Add To Do item ")
 print("2.Show To Do List ")
 print("3.Mark an item as done ")
 print("4.print the done list ")
 print("5.Remove task ")
 print("6.Exist ")
 options=int(input("Enter your choice (1-6): "))
 if options== 1:
    task = input("Enter a task: ")
    ToDoList.append(task)
    print("Task added successfully!")

 elif options == 2:
    if len(ToDoList) > 0:
       i = 0
       while i < len(ToDoList):
         print(f"{i+1}-{ToDoList[i]}")
         i+=1
    else:
       print("To Do list is empty")
 elif options == 3:
    if len(ToDoList) > 0:
       i = 0
       while i < len(ToDoList):
         print(f"{i+1}-{ToDoList[i]}")
         i+=1
    else:
       print("To Do list is empty")

    index=int(input("enter the index that done "))
    index-=1
    if index < len(ToDoList):
     item=ToDoList.pop(index)
     DoneList.append(item)
     print("Item moved to done list successfully! ")
    else :
      print("Selected Item not exist")
 elif options == 4:
    if len(DoneList) > 0:
     for i in range(len(DoneList)):
       print(str(i+1) + '-' + str(DoneList[i]))
    else :
      print("Done list is empty")
 elif options == 5:
    if len(ToDoList) > 0:
       i = 0
       while i < len(ToDoList):
         print(f"{i+1}-{ToDoList[i]}")
         i+=1
    else:
       print("To Do list is empty")
    index=int(input("enter the index you want to remove "))
    index-=1
    if index < len(ToDoList):
     RemovedItem=ToDoList.pop(index)
     print(f"Task '{RemovedItem}' removed successfully!")
    else :
     print("No tasks found.")
 elif options == 6:
   print("Exiting the application. Goodbye!")
   flag=False
 else :
    print("Wrong Choice, Please try again ")

