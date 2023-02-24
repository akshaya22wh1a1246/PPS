int c;
#define line(s,a)printf("\n");\
       for(c=1;c<=s;c++)\
          printf("%c",a);
#include<stdio.h>
struct book
{
    int bno;
    char bname[20];
    float bprice;
};
void main()
{
    FILE *fp,*ft;
    int i,k,j,xx;
    struct book b,t,a[100];
    int ch,max,s,dbno,rec,recsize;
    char x;
    fp=fopen("books.txt","rb+");
    if(fp==NULL)
    {
        fp=fopen("books.txt","wb+");
    }
    while(1)
    {
        
        printf("\n 1.Append Records");
        
        printf("\n 2.List Records");
        
        printf("\n 3.Search Particular Record..");
       
        printf("\n 4.Delete Book");
        
        printf("\n 5.Sort Books List");
        
        printf("\n 6.Exit");
       
        printf("\n Enter Your choice(1/2/3/4/5/6)..");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            do
            {
                if(fp!=NULL);
                {
                    max=1000;
                    rewind(fp);
                    while(fread(&b,sizeof(b),1,fp)==1)
                    {
                        if(max<b.bno)
                        max=b.bno;
                    }
                }
                b.bno=max+1;
                
                printf("\n Book Number:%3d",b.bno);
             
                printf("\n Give the Book Name...");
                scanf("%10s",&b.bname);
                
                printf("\n Give the Book price..");
                scanf("%f",&b.bprice);
                fseek(fp,0,SEEK_END);
                fwrite(&b,sizeof(b),1,fp);
                
                printf("\n D U Have Another Record(y/n)...");
                scanf("\n %c",&x);
            }while(tolower(x)=='y');
            break;
            case 2:
            
            printf("\n\t Gouthami Book Store");
            line(40,6);
            printf("\n Rec# Book No Book Name Book Price");
            line(40,6);
            rewind(fp);
            rec=1;
            while(fread(&b,sizeof(b),1,fp)==1)
            {
                printf("\n\n %3d %-8d %-12s %-10.2f",rec,b.bno,b.bname,b.bprice);
                rec++;
            }
            line(40,6);
           
             printf("\n Press a Key");
            break;
            case 3:
            
            printf("\n Enter Book Number...");
            scanf("%d",&dbno);
            s=0;
            rewind(fp);
            while(fread(&b,sizeof(b),1,fp)==1)
            {
                if(b.bno==dbno)
                {
                    
                    printf("\n Book Number=%d",b.bno);
                    
                    printf("\n Book Name=%s",b.bname);
                    
                    printf("\n Book Price=%.2f",b.bprice);
                    s=1;
                    break;
                }
            }
            if(s==0)
            {
                
                printf("[%d] Block Number Not Existed..",dbno);
            }
            
            printf("\n Press a Key");
            break;
                
            case 4:
            
            printf("\n Enter Book Number...");
            scanf("%d",&dbno);
            ft=fopen("temp","wb");
            s=0;
            rewind(fp);
            while(fread(&b,sizeof(b),1,fp)==1)
            {
                if(b.bno!=dbno){
                    fwrite(&b,sizeof(b),1,ft);
                }
                else{
                    
                    printf("\n Book Number=%d",b.bno);
                    
                    printf("\n Book Name=%s",b.bname);
                    
                    printf("Book Price=%.2f",b.bprice);
                    
                    printf("\n [%d]Book has been Deleted",dbno);
                    s=1;
                }
            }
            fclose(fp);
            fclose(ft);
            remove("books.txt");
            rename("temp","books.txt");
            fp=fopen("books.txt","rb+");
            if(s==0)
            {
              
                printf("[%d] Book Number Not Existed..",dbno);
            }
            
            printf("\n Press a key");
            break;
            case 5:
            i=0,k=0;
            rewind(fp);
            while(fread(&a[i],sizeof(a[i]),1,fp)==1)
            {
                i++;
                k++;
            }
            do
            {
            
                printf("\n 1. Book Name..");
               
                printf("\n 2. Book Price..");
                
                printf("\n 3.Exit");
                
                printf("\n Enter Your choice(1/2/3)..");
                scanf("%d",&xx);
                switch(xx)
                {
                    case 1:
                    for(i=0;i<k-1;i++)
                    {
                        for(j=i+1;j<k;j++)
                        {
                            if(strcmp(a[i].bname,a[j].bname)>0)
                            {
                                t=a[i];
                                a[i]=a[j];
                                a[j]=t;
                            }
                        }
                    }
                        printf("\n After Sorting Student Details..\n\n");
                        printf("\n\t Gouthami Book Store");
                        line(40,6);
                        printf("\n Rec# Book No Book Name Book Price");
                        line(40,6);
                        rewind(fp);
                        rec=1;
                        for(i=0;i<k;i++)
                        {
                            printf("\n\n%3d.%-8d %-12s %-10.2f",rec,a[i].bno,a[i].bname,a[i].bprice);
                            rec++;
                        }
                        line(40,6);
                    
                        printf("\n Press a Key");
                        break;
                        case 2:
                        for(i=0;i<k;i++)
                        {
                            for(j=i+1;j<k-1;j++)
                            {
                                if(a[i].bprice>a[j].bprice)
                                {
                                    t=a[i];
                                    a[i]=a[j];
                                    a[j]=t;
                                }
                            }
                        }
                        printf("\n After Sorting Student Details..\n\n");
                        printf("\n\t Gouthami Book Store");
                        line(40,6);
                        printf("\n Rec# Book No  Book Name  Book Price");
                        line(40,6);
                        rewind(fp);
                        rec=1;
                        for(i=0;i<k;i++)
                        {
                            printf("\n\n%3d.%-8d %-12s %-10.2f",rec,a[i].bno,a[i].bname,a[i].bprice);
                            rec++;
                        }
                        line(40,6);
                        
                        printf("Press a Key");
                        break;
                        case 3:
                        break;
                        }
                 }
                 while(xx!=3);
                 break;
             case 6:
                break;
            }
        }while(ch=='@');
}
