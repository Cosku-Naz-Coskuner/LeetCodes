
typedef struct stackNode { 
    char data;                  
    struct stackNode *nextPtr;  
} Node; 

Node *topPtr = NULL;

void push(char value) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->nextPtr = topPtr;
    topPtr = newNode;
}

char pop(void) {
    if (topPtr == NULL) {
        return '\0';
    }
    Node *tempPtr = topPtr;
    char popValue = tempPtr->data;
    topPtr = topPtr->nextPtr;
    free(tempPtr);
    return popValue;
}

void clearStack() {
    while (topPtr != NULL) {
        pop();
    }
}

bool isValid(char* s) {
    clearStack(); // ÖNEMLİ: Her çağrıda önce temizle
    int size = strlen(s);
    bool result = true;

    for (int i = 0; i < size; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (topPtr == NULL) {
                result = false;
                break;
            }
            char top = pop();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == ']' && top != '[') ||
                (s[i] == '}' && top != '{')) {
                result = false;
                break;
            }
        }
    }

    if (topPtr != NULL) {
        result = false;
    }

    clearStack();
    return result;
}