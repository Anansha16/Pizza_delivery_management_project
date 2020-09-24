#include <bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data[10];
    Node* next;
    Node(int x[])
    {
        for(int i=0;i<10;i++)
        {
            data[i]=x[i];
        }
        next = NULL;
    }
};
struct Queue
{
    Node *front, *rear;
    Queue()
{
        front = rear = NULL;
    }
 
    void enQueue(int x[])
    {
        Node* temp = new Node(x);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
 
    void deQueue()
    {
        if (front == NULL)
            return;
            Node* temp = front;
             front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
    void display()
    {
        for(int i=0;i<10;i++)
        {
            cout<<front->data[i]<<"\n";
        }
    }
};
int main()
{
    Queue q[2];
    int ch[10],flag,app,k;
    char ord[2];
    for(int j=0;j<2;j++)
        {
        cout<<"                        WELCOME          \n";
        cout<<"OUR DELIVERY OPTIONS:\n1.PRESTIGE SHANTINIKETAN\n2.PRESTIGE TRANQUALITY\n3.BRIGADE METROPOLISE\n4.GOPALAN MILLENIUM\n5.EMPYRIEN\n6.HOPE FARM JUNCTION\n7.HOODI CIRCLE\n";
cout<<"Enter your location choice:\n";
        cin>>app;
        cout<<"1.Veg\n2.Non-veg\n";
        cin>>k;
        if(app>=0&&app<=7&&k==1)
        {
        cout<<"--------------------------MENU---------------------\n";
        cout<<"101: NEW YORK MARGARITA\n102:SUN KISSED CLASSIC\n103:CALIFORNIA VEG CLASSIC\n104:TEX MEX SPECIAL CLASSIC\n105:HAWAIIAN SPECIAL CLASSIC\n106:SCHEZWAN VEG CLASSIC\n107:PERI PERI VEG CLASSIC\n108:QUATTRO FORMAGGI CHEEZE CLASSIC\n109:PANEER BUTTER MASALA CLASSIC\n110:MEXICAN NACHOS CLASSIC\n111:TANDOORI PANEER TIKKA CLASSIC\n112:CHOCO DESERT CLASSIC\n";
        for(int i=0;i<10;i++)
            {
                flag=0;
                cin>>ch[i];
                if(ch[i]>=101&&ch[i]<=111)
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                q[j].enQueue(ch);
                cout<<"Confirming the order:\n";
                q[j].display();
            }
            else
            {
                cout<<"WRONG CHOICE!!!";
            }
        }
        else if(app>=0&&app<=7&&k==2)
        {
            cout<<"--------------------------MENU---------------------\n";
cout<<"201:AMERICAN POLLO SMOKED CLASSIC\n202:DEVILS BARBEQUE CHICKEN CLASSIC\n203:HICKORY SMOKED CHICKEN CLASSIC\n204:TEXAS BARBEQUE CLASSIC\n205:AFRICAN PERI PERI POLLA CLASSIC\n206:SCHEXWAN POLLO CHICKEN CLASSIC\n207:PUNJABI TANDOORI CHICKEN POLLO CLASSIC\n208:CHICKEN TIKKA CLASSIC\n209:CRISPY POLLO PESTO CLASSIC\n210:CHICKEN PEPPERONI CLASSIC\n";
for(int i=0;i<10;i++)
            {
                flag=0;
                cin>>ch[i];
                if(ch[i]>=101&&ch[i]<=111)
                {
                    flag=1;
                }
            }
if(flag==1)
            {
                q[j].enQueue(ch);
                cout<<"Confirming the order:\n";
                q[j].display();
            }
            else
            {
                cout<<"WRONG CHOICE!!!";
            }
        }
        else
        {
            cout<<"Sorry your option is out of bounds for our delivery option.\n";
                    }
 cout<<" THANK YOU!!! You can check for delivery options at other locations";
    }
for (int i=0;i<2;i++)
    {
         cout<<"\nDear customer,\n Did you receive your order?";
         cin>>ord[i];
         if(ord[i]=='yes')
            {
                q[i].deQueue();
            }
        cout<<"Order successfully completed!!";
    }
    return 0;
}
