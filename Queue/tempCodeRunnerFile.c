    if(new_node == NULL){
        printf("Queue Full \n");
        return;
    }

    new_node->data = val;
    new_node->next = NULL;
    if(front == NULL){
        front = rear = new_node;
        return;
    }

    rear->next = new_node;
    new_node = rear;
}

int dequeue(){
    if(front == NULL){
        printf("Queue Empty \n");
        return -1;
    }

    int ans = front->data;
    struct Node* temp = front;
    front = front->next;
    free(temp);

    return ans;
}

int first(){
    if(front == NULL){
        printf("Queue Empty \n");
        return -1;
    }