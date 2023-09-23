from tkinter import *

FirstNumber=SecondNumber=operator=None

def GetNumber(number):
    global operator
    CurrentNumber = str(ResultLabel.cget('text'))
    NewNumber = CurrentNumber + str(number)
    ResultLabel.config(text=NewNumber)

def GetClear():
    ResultLabel.config(text='')

def GetOperator(operation):
    global FirstNumber,operator
    FirstNumber = float(ResultLabel.cget('text'))
    operator = operation
    ResultLabel.config(text='')

def GetResult():
    global FirstNumber,SecondNumber,operator
    SecondNumber = float(ResultLabel.cget('text'))
    result=0

    match(operator):
        case '+':
            result = FirstNumber + SecondNumber
        case '-':
            result = FirstNumber - SecondNumber
        case '*':
            result = FirstNumber * SecondNumber
        case '/':
            if SecondNumber ==0:
                 ResultLabel.config(text='Error')
                 return
            else :
                result = FirstNumber / SecondNumber
    ResultLabel.config(text=str(result))


        
task=Tk()
task.title("Simple Calculator")
task.geometry("350x430")
task.configure(background='pink')



ResultLabel = Label(task,text='',bg='pink',fg='white')
ResultLabel.grid(row=0,column=0,columnspan=5,padx=50, pady=25)
ResultLabel.config(font=('Arial',45,'bold'))

Buttons = [
    ("7", 1, 0), ("8", 1, 1), ("9", 1, 2), ("/", 1, 3),
    ("4", 2, 0), ("5", 2, 1), ("6", 2, 2), ("*", 2, 3),
    ("1", 3, 0), ("2", 3, 1), ("3", 3, 2), ("-", 3, 3),
    ("C", 4, 0), ("0", 4, 1), ("=", 4, 2), ("+", 4, 3)
]

for ButtonText, row, col in Buttons:

    if ((row==4) and (col==0)):
     
     ClearButton = Button(task, text="C", bg='#8A2BE2',fg='white',
                          width=10,height=4, command= GetClear)
     ClearButton.grid(row=row, column=col)
     ClearButton.config(font=('Arial',10))

    elif ((row==4)and (col==2)):
     
     EqualButton = Button(task, text="=", bg='#FF69B4',fg='white',
                          width=10,height=4, command= GetResult)
     EqualButton.grid(row=row, column=col)
     EqualButton.config(font=('Arial',10))

    elif ((row==4)and (col==3)):
     
     AddButton = Button(task, text="+", bg='#FF69B4',fg='white',
                        width=10,height=4,command=lambda:GetOperator('+'))
     AddButton.grid(row=row, column=col)
     AddButton.config(font=('Arial',10))

    elif  ((row==3)and (col==3)):
     SubButton = Button(task, text="-", bg='#FF69B4',fg='white',
                        width=10,height=4,command=lambda:GetOperator('-'))
     SubButton.grid(row=row, column=col)
     SubButton.config(font=('Arial',10))

    elif  ((row==2)and (col==3)):
     
     MulButton = Button(task, text="*", bg='#FF69B4',fg='white',
                        width=10,height=4,command=lambda:GetOperator('*'))
     MulButton.grid(row=row, column=col)
     MulButton.config(font=('Arial',10))

    elif  ((row==1)and (col==3)):
     
     DivButton = Button(task, text="/", bg='#FF69B4',fg='white',
                        width=10,height=4,command=lambda:GetOperator('/'))
     DivButton.grid(row=row, column=col)
     DivButton.config(font=('Arial',10))

    else: 
     
     button = Button(task, text=ButtonText, bg='#FF69B4',fg='white',width=10,height=4,
                       command=lambda text=ButtonText: GetNumber(text))
     button.grid(row=row, column=col)
     button.config(font=('verdana',10))


task.mainloop()