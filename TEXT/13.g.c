#include<stdio.h>
#include<string.h>
int main()
{
    char buf[64];
    while(scanf("%s", buf) != EOF){
        // for(int i = 0, thx=0; i <sizeof(buf); i++){
        //     if(buf[i]>='0')==0&&buf[i]<='9'){
        //         buf[thx]=buf[i];thx++;
        //     }
        // }
        if(strcmp(buf,"142857")==0||strcmp(buf,"0588235294117647")==0||strcmp(buf,"052631578947368421")==0||strcmp(buf,"0434782608695652173913")==0||strcmp(buf,"0344827586206896551724137931")==0||strcmp(buf,"0212765957446808510638297872340425531914893617")==0||strcmp(buf,"0169491525423728813559322033898305084745762711864406779661")==0||strcmp(buf,"016393442622950819672131147540983606557377049180327868852459")==0){
            printf("%s is cyclic\n", buf);
        }
        else{
            printf("%s is not cyclic\n", buf);
        }
    }
    return 0;
}