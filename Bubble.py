#bubble Sort
def bubblesort(marks):
    n=len(marks)
    for i in range(n-1):
        for j in range(0, n - i - 1):
            if(marks[j] > marks[j + 1]):
                marks[j],marks[i]=marks[i],marks[j]
 
    print("The Marks of students after performing Bubble Sort are in the list:")
    for i in range(n):
        print(marks[i])
       
#selection Sort

def selectionSort(marks):
    for i in range (len(marks)):
        for j in range (i+1, len(marks)):
            if(marks[i]>marks[j]):
                marks[j],marks[i] = marks[i],marks[j]
    print(marks)
    
 
    print("The marks after performing selection sort in the list:")
    for i in range(len(marks)):
        print(marks[i])
#printing to 5 students
def topfive(marks):
    print("Top Five Marks are:")
    if (len(marks)<6):
        print(*marks[::-1], sep="\n")
    else:
        print(*marks[:len(marks)-6:-1], sep="\n")
def main():
    marks=[]
    n=int(input("Enter the number of students:"))
    print("Enter the marks for ",n," students")
    for i in range(0,n):
        ele=float(input())
        marks.append(ele)
    print("the marks of ",n," students are:")
    print(marks)
    flag=1
    while (flag==1):
        print("1. Selection sort of the marks")
        print("2. Bubble sort of the marks")
        print("3. Exit")
        c=int(input("\n\nEnter the Choice from 1 to 3: "))
 
        if (c==1):
            selectionSort(marks)
            a=input("\nDo you want to display top marks of the class (yes/no)")
            if (a=='yes'):
                topfive(marks)
                flag=0
            else:
                print("\nThankyou")
                flag=0
        elif (c==2):
            bubblesort(marks)
            a=input("\nDo you want to display top marks of the class (yes/no)")
            if (a=='yes'):
                topfive(marks)
                flag=0
            else:
                print("\nThankyou")
                flag=0
        elif (c==3):
            print("\nPlease enter valid choice!")
            flag=0
        else:
            print("\nThankyou")
            flag=0
main()
