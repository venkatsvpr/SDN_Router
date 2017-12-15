#ifndef CONNECTION_MANAGER_H_
#define CONNECTION_MANAGER_H_

char *last_pkt;
char *one_last_pkt;

int control_socket, router_socket, data_socket;
int data_control_socket;
void init();

#endif
