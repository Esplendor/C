# Before run script, is necessary compile the code using:
# First step: gcc dns_resolver.c -o dns_resolver
# Final step: ./dns_resolver www.site.com

#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

        if(argc <= 1){
                printf("DNS Resolver by Esplendor. \n");
                printf("Use mode: ./dns_resolver www.site.com \n");
                return 0;
        } else {

                struct hostent *target = gethostbyname(argv[1]);

                if (target == NULL){
                        printf("Failed\n");
                } else{
                        printf("IP: %s \n",inet_ntoa(*((struct in_addr *)target->h_addr)));
                }
}
}
