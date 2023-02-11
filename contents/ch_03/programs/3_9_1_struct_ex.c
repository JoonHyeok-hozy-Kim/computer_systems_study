


struct rec {
    int i;
    int j;
    int a[3];
    int *p;
} r;

void member_copy(struct rec *r){
    r->j = r->i;
}

int* generate_pointer(struct rec *r){
    return &(r->a[1]);
}

int main() {
    
}