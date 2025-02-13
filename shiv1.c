//try to do something unexpected//
/*here accepting there the ladder at 45-67,76-87,12-34,56-67,85-91,24-46
and the snakes at 99-84,78-64,35-18,49-28,24-8,18-4*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int disc();
void scoreboard(int p[4]);

int main(){

    int a[4];//assigning the variable for each palayer
    int t,q,t1,t3,t4;
    int i;
    int s;
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;


    printf("\033[1;32mNow GOing to enter to the new game\033[0m\n",i+1); 
    srand(time(NULL));
    while(a[0]!=100&&a[1]!=100&&a[2]!=100&&a[3]!=100){

           
            printf("player1 your turns\n");



        printf("enter any key to roll\n");
        scanf("%d",&q);
        t=disc();

        //calling the disc for first player  
        a[0]=a[0]+t;
        printf("you rolled %d\n",t);
        if(a[0]>100){
            a[0]=a[0]-t;
        }
        printf("your current score is %d\n",a[0]);
        printf("player2 your turns\n");
        printf("enter any key to roll\n");
        scanf("%d",&q);
        t1=disc();//calling the disc for second player
        a[1]=a[1]+t1;
        printf("your roll is %d\n",t1);
        if(a[1]>100){
            a[1]=a[1]-t1;
        }
        printf("your current score is %d\n",a[1]);
        printf("player3 your turns\n");



        printf("enter any key to roll\n");
        scanf("%d",&q);
        t3=disc();//calling the disc for third player
        a[2]=a[2]+t3;
        printf("you rolled %d\n",t3);
        if(a[2]>100){
            a[2]=a[2]-t3;
        }
        printf("your current score is %d\n",a[2]);
        printf("player4 your turns\n");
        printf("enter any key to roll\n");
        scanf("%d",&q);
        t4=disc();//calling the disc for forth player
        a[3]=a[3]+t4;
        printf("you rolled %d\n",t4);
        if(a[3]>100){
            a[3]=a[3]-t4;
        }
        printf("your current score is %d\n",a[3]);
        for(i=0;i<4;i++){
            if(a[i]==45){
                printf("\033[1;32mplayer %d got ladder you move from 45-62\033[0m\n",i+1); // Green
                a[i]=67;
            }
            else if(a[i]==76){
                printf("\033[1;32mplayer %d got ladder \033[0m\n",i+1); // Green
                a[i]=87;
            }
            else if(a[i]==12){
                printf("\033[1;32mplayer %d got ladder you move from 12-34\033[0m\n",i+1); // Green
                a[i]=34;
            }
            else if(a[i]==56){
                printf("\033[1;32mplayer %d got ladder you move from 56-67\033[0m\n",i+1); // Green
                a[i]=67;
            }
            else if(a[i]==85){
                printf("\033[1;32mplayer %d got ladderyou move from 85-91\033[0m\n",i+1); // Green
                a[i]=91;
            }
            else if(a[i]==24){
                printf("\033[1;32mplayer %d got ladder you move from 24-46\033[0m\n",i+1); // Green
                a[i]=46;
            }
            else if(a[i]==99){
                printf("\033[1;31mplayer %d bitten by snake you are fall from 99-84\033[0m\n",i+1); // red
                a[i]=84;
            }
            else if(a[i]==78){
                printf("\033[1;31mplayer %d bitten by snake you are fall from78-64\033[0m\n",i+1); // red
                a[i]=64;
            }
            else if(a[i]==35){
                printf("\033[1;31mplayer %d bitten by snake you are fall from 35-18\033[0m\n",i+1); // red
                a[i]=18;
            }
            else if(a[i]==49){
                printf("\033[1;31mplayer %d bitten by snake you are fall from 49-28 \033[0m\n",i+1); // red
                a[i]=28;
            }
            else if (a[i]==24){
                printf("\033[1;31mplayer %d bitten by snake you are fall from 24-8 \033[0m\n",i+1); // red
                a[i]=8;
            }
            if (a[i]==100){
                printf("\033[1;35mplayer %d won the game \033[0m\n",i+1); // red
                printf("\033[1;35mthe game is end here\033[0m\n",i+1); 
                return 0;
        
            }
        
        }   
        scoreboard(a);     
    }
    return 0;   
}

//calling the function for the scoreboard
void scoreboard(int p[4]){
    int i,j,pos,a,k;
    //defing the value of pos from 1-100
    
    for(i=10;i>=1;i--){
            a=1;
            for(k=0;k<10;k++){
                printf("\033[1;36m--\033[0m \t");  
               
            }
            printf("\n");
        for(j=10;j>=1;j--){
            if(i%2==0){
                pos=(i-1)*10+j;

            }
            else{
                pos=(i-1)*10+a;
                a++;
            }

            


    //printing scoreboard from 1-100


        if(p[0]==pos ){
            printf("\033[1;31m|#p1#|\033[0m\t"); 
        }
        else if(p[1]==pos ){
            printf("\033[1;32m|#p2#|\033[0m\t"); 
        }
        else if(p[2]==pos ){
            printf("\033[1;34m|#p3#|\033[0m\t");
        }
        else if(p[3]==pos ){
            printf("\033[1;33m|#p4#|\033[0m\t"); 
        }
        else if(pos==45||pos==67){
            printf("\033[1;36m|L1|\033[0m\t"); 
            
        
            
        }
        else if(pos==76||pos==87){
            printf("\033[1;37m|L2|\033[0m\t"); 
            
        
            
        }
        else if(pos==12||pos==34){
            printf("\033[1;37m|L3|\033[0m\t"); 
            
        
            
        }
        else if(pos==56||pos==67){
            printf("\033[1;37m|L4|\033[0m\t"); 
            
        
            
        }
        else if(pos==85||pos==97){
            printf("\033[1;36m|L5|\033[0m\t"); 
            
        
            
        }
        else if(pos==24||pos==46){
            printf("\033[1;36m|L6|\033[0m\t"); 
            
        
            
        }


        else{
            
                printf("\033[1;35m||%d||\033[0m\t",pos); 
        }

        }

        printf("\n\n");  
    }
    

}


    int disc() {
    return (rand() % 6) + 1; // Generates a number between 1 and 6
    }





  