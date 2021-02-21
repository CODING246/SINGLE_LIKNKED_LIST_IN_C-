#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    struct Node
    {
        int info;
        struct Node*link;
    };
    struct Node* head=NULL;
    void insert_element()
    {
        struct Node* temp;
        temp=(struct Node*)malloc(sizeof(struct Node));
        cout<<"Enter a element"<<endl;
        cin>>temp->info;
        if(temp==NULL){
            head=temp;
        }else{//adding node on first position;
            temp->link=head;
            head=temp;
        }
    }
    void Delete_element()
     {
         struct Node* temp;
         temp=head;
         if(temp==NULL)
         {
             cout<<"list is empty"<<endl;
         }else{
           temp=head->link;
           head=temp;
         }
     }
     void view_all_element()
     {
         struct Node* temp;
         temp=head;
         if(temp==NULL)
         {
             cout<<"list is empty "<<endl;
         }else{
         while(temp->link!=NULL)
            {
                cout<<" "<<temp->info;
               temp=temp->link;
            }

         }

     }
     void search_elemnt()
     {
         struct Node* temp;
         int item;
         cout<<"Enter a search element"<<endl;
         cin>>item;
         temp=head;
         if(temp==NULL){
            cout<<"list is empty"<<endl;
         }else{
              while(temp!=NULL){
                   if(temp->info==item)
              {
                  cout<<endl;
                  cout<<"element is found :"<<endl<<temp->info;
                  break;
              }
              temp=temp->link;
              }

         }
     }
     void insert_at_the_end_of_the_list()
     {
         struct Node* last,*temp;
         int n;
         temp=(struct Node*)malloc(sizeof(struct Node));
         cout<<"Enter a number:"<<endl;
         cin>>temp->info;
         temp->link=NULL;
         last=head;
         if(last==NULL){
         cout<<"list is empty"<<endl;
                    }else{
                         while(last->link!=NULL){
                           last=last->link;
                         }
                         last->link=temp;
                         temp->link=NULL;
                         }
     }
     void insert_element_between_nodes()
     {
         int pos=0,n=0;
         struct Node* temp,*p;
         temp=(struct Node*)malloc(sizeof(struct Node));
         p=head;
         cout<<"Enter the position for insert a node :"<<endl;
         cin>>n;
         cout<<"enter a element"<<endl;
         cin>>temp->info;
         if(p==NULL){
            cout<<"list is full!"<<endl;
         }else{
            while(p->link!=NULL){
             pos= pos+1;
             p=p->link;
             if(pos==n){
                temp->link=p->link;
                p->link=temp;
             }
            }

         }
     }
    /* int delete_between_the_node()
     {
         int a,n;
        struct Node* temp, *p;
        cout<<"Enter the position number for deleting"<<endl;
        cin>>n;
        temp=head;
        if(temp==NULL)
        {
          cout<<"list is empty"<<endl;
        }
        while(temp->link->info=NULL)
            {
                n=n+1;
              if(temp->info==n){
                p=temp->info;
                temp->link=NULL;
                free(temp);
               return  (p);
              }
            }*/
     int main()
     {
         int n;
         char ch;
         do{
             cout<<"1.insert element on the first position"<<endl;
             cout<<"2.Delete element"<<endl;
             cout<<"3.view all element"<<endl;
             cout<<"4.search element"<<endl;
             cout<<"5.insert element on the last position"<<endl;
             cout<<"6.inset between the nodes"<<endl<<endl;
             //cout<<"7.delete between the nodes"<<endl<<endl<<endl;
             cout<<"Enter your choice :";
             cin>>n;
             switch(n)
             {
                case 1:{
                 insert_element();
                 break;
                       }
                case 2:{
                 Delete_element();
                 break;
                       }
                case 3:{
                   view_all_element();
                   break;
                       }
                case 4:
                    {
                        search_elemnt();

                        break;
                    }
                case 5:
                    {
                        insert_at_the_end_of_the_list();
                        break;
                    }
                case 6:
                    {
                        insert_element_between_nodes();
                        break;
                    }
                case 7:
                    {
                       //cout<<"delete element is :"<<delete_between_the_node();
                    }
             }
             cout<<endl;
             cout<<"Do you want to continue(Y/N) :";
             cin>>ch;
           }while(ch=='y'||ch=='Y');
           return(0);
     }
