#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;

    Node(){
        data = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoubleLinkedList{
public :
    Node *head;
    Node *tail;

    DoubleLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertdepan(int value);
    void insertbelakang(int value);
    void cetak();
    void hapusdepan();
    void hapusbelakang();
    int hitungnode();
    bool searchdata(int k);
    bool searchdata2(int k, int n);
};

void DoubleLinkedList::insertdepan(int value){
    Node *temp = new Node(value);

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void DoubleLinkedList::cetak(){
    Node *temp = new Node;
    temp = head;

    while (temp != NULL){
        if(temp->next != NULL){
            cout << "[" <<temp->prev<<" | "<< temp->data << " | " << temp->next << "] --> ";
        }
        else {
            cout << "[" <<temp->prev<<" | "<< temp->data << " | " << temp->next << "]";
        }
        temp = temp->next;
    }
    cout << endl;
}
void DoubleLinkedList::insertbelakang(int value){
    Node *temp= new Node;
    temp->data=value;

    if (head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }

}
void DoubleLinkedList::hapusdepan(){
    Node  *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;

    head->prev = NULL;
    cetak();
}
void DoubleLinkedList::hapusbelakang(){
    Node *current = new Node;
    Node *previous = new Node;
    current = head;

    while(current->next != NULL){
        previous = current;
        current = current->next;
    }
    tail = previous;
    previous->next = NULL;
    delete current;

    cetak();

}

int DoubleLinkedList::hitungnode(){
    int s=0;
    Node *temp= new Node;
    temp=head;

    while(temp!=NULL){
        s++;
        temp=temp->next;
    }
    return s;
}

bool DoubleLinkedList::searchdata(int k){
    bool found=false;
    Node *temp=new Node;
    temp=head;
    while(temp!=NULL){
        if (temp->data==k){
            found=true;
            break;
        }
        temp=temp->next;
    }
    return found;
}


int main()
{

    DoubleLinkedList objek;

    //insertdepan
    cout<<"Insert Depan : \n";
    objek.insertdepan(40);
    objek.cetak();
    objek.insertdepan(50);
    objek.cetak();
    cout<<"\n";

    //insertbelakang
    cout<<"Insert Belakang: \n";
    objek.insertbelakang(12);
    objek.cetak();
    objek.insertbelakang(22);
    objek.cetak();
    cout<<"\n";

    //hapusdepan
    cout<<"Hapus Depan: \n";
    objek.hapusdepan();
    cout<<"\n";


    //hapusbelakang
    cout<<"Hapus Belakang: \n";
    objek.hapusbelakang();
    cout<<"\n";

    //hitungnode
    cout<<"Hitung Node: \n";
    objek.hitungnode();
    cout<<objek.hitungnode();
    cout<<"\n";
    cout<<"\n";

    //saerchdata
    int cari;
    cout<<"Masukkan angka yang akan dicari: ";
    cin>>cari;
    objek.searchdata(cari);
    if(objek.searchdata(cari)==1){
        cout<<"Data ditemukan di Node\n";
    }
    else{
        cout<<"Data tidak ditemukan\n";
    }


    return 0;
}