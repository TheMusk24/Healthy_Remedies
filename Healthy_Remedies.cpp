#include<bits/stdc++.h> //Medical Queries Solution
#include <conio.h>
#include<stdlib.h>
using namespace std;
class medical
{  
public:
    string s;
    int n;
    void cold();
    void cough();
    void fever();
    void acne();
    void arthritis();
    void conjunctivitis();
    void diarrhea();
    void mononucleosis();
    void stomach_aches();
    void chickenpox();
    void display()
    {
        cout<<"Thank you "<<s<<" for rating us"<<endl;
    }
};
class rate:public medical
{
    public:
    void getdata()
    {
        cout<<"Enter your name"<<endl;
        cin.ignore();
        getline(cin,s);
        cout<<endl;
        cout<<"Please rate our services from 1 to 10"<<endl;
        cin>>n;
    }
    void display()
    {
        cout<<"You rate "<<n<<" to us "<<endl;
    }
    rate()
    {
        s=' ';
        n=0;
    }
    ~rate(){}
};
int main()
{
    rate a;
    char k,n;
    cout << "WELCOME TO MEDICAL QUERIES CENTRE " << endl;
    do
    {  
        cout << "Enter\n A for ACNE \n B for ARTHRITIS \n C for CHICKENPOX \n D for COLD " << endl;
        cout << " E for CONJUNCTIVITIS \n F for COUGH \n G for DIARRHEA " << endl;
        cout << " H for FEVER \n I for MONONUCLEOSIS \n J for STOMACH ACHES" << endl;
        cin >> n;
        switch (n)
        {
        case 'A':    
        case 'a':
            a.medical::acne();
            break;
        case 'B':
        case 'b':
            a.medical::arthritis();
            break;
        case 'C':
        case 'c':
            a.medical::chickenpox();
            break;
        case 'D':
        case 'd':
            a.medical::cold();
            break;
        case 'E':
        case 'e':
            a.medical::conjunctivitis();
            break;
        case 'F':
        case 'f':
            a.medical::cough();
            break;
        case 'G':
        case 'g':
            a.medical::diarrhea();
            break;
        case 'H':
        case 'h':
            a.medical::fever();
            break;
        case 'I':
        case 'i':
            a.medical::mononucleosis();
            break;
        case 'J':
        case 'j':
            a.medical::stomach_aches();
            break;
        default:
           { cout << "Please enter valid choice " << endl;
            break;}
        }
        cout << endl;
        cout << "if you want more information press Y otherwise any other key for exit " << endl;
        cin >> k;
    } while (k == 'y' || k == 'Y');
    a.getdata();
    a.display();
    a.medical::display();
        cout << endl << "Exit" << endl;
    getch();
    return 0;
}

//*****************************************************************
//FEVER FUNCTION
void medical::fever()
{
    cout << "You choose FEVER option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the fever are " << endl;
            cout << "1) The body temperature is above 98F \n"
                    "2) severe headache\n"
                    "3) frequent vomiting\n"
                    "4) chest or abdominal pain\n"
                    "5) stiff neck\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Drink fluids such as juice, soups, decaffeinated tea\n"
                    " 2) Get plenty of rest\n "
                    "3) Take an over-the-counter medication\n "
                    "4) Take milk with termeric\n "
                    "5) Hold the cool cloth on the forehead\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Aspirin tablets\n "
                    "2) Paracetamol tablets\n "
                    "3) acetaminophen\n "
                    "4) ibuprofen\n "
                    "5) naproxen\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {   cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in fever zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of fever zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//************************************************************
//COUGH FUNCTION
void medical::cough()
{
    cout << "You choose COUGH option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the cough are " << endl;
            cout << "1) Heartburn or a sour taste in your mouth. \n"
                    "2) A runny or stuffy nose\n"
                    "3) severe pain in lower part of neck\n"
                    "4) A feeling of liquid running down the back of your throat (postnasal drip)\n"
                    "5) Frequent throat clearing and sore throat.\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Drink fluids such as Honey tea, Ginger tea, Warm water\n"
                    " 2) Salt-water gargle\n "
                    "3) Marshmallow Roots will be use fo the cure \n "
                    "4) Stay in this steam for a few minutes until symptoms subside \n "
                    "5) Bromelain is an enzyme that help in cough and comes from pineapples. So you must drink pineapple juice \n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) dextromethorphan\n "
                    "2) guaifenesin\n "
                    "3) Benadryl\n "
                    "4) Codral\n "
                    "5) Coldrex\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in cough zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of cough zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//*******************************************************************************
//COLD FUNCTION
void medical::cold()
{
    cout << "You choose COLD option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the cold are " << endl;
            cout << "1) Congestion or runny nose.. \n"
                    "2) Sore throat.\n"
                    "3) Post-nasal drip.\n"
                    "4) Cough and Fever or Chills.\n"
                    "5) Watery eyes..\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Drink fluids such as Honey tea, Ginger tea.\n"
                    " 2) Chicken soup has great effect in sick\n "
                    "3) Vitamin C (Lemons) plays an important role in cold. \n "
                    "4) Add more Garlic in the food. \n "
                    "5) Salt-Water, Vapour Rub, Warm baths are some other way.\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) acetaminophen\n "
                    "2) aspirin\n "
                    "3) ibuprofen\n "
                    "4) Paracetamol\n "
                    "5) Advil, Motrin IB etc\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in cold zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of cold zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//***************************************************************************
//ACNE FUNCTION
void medical::acne()
{
    cout << "You choose ACNE option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the acne are " << endl;
            cout << "1) Crusting of skin bumps.\n"
                    "2) Cysts.\n"
                    "3) Papules (small red bumps)\n"
                    "4) Whiteheads.\n"
                    "5) Scarring of the skin.\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Drink fluids such as Neem juice, Bitter Gourd(karela) soups.\n"
                    " 2) Apply apple cider vinegar from pressed apples.\n "
                    "3) Take a zinc supplement\n "
                    "4) Make a honey and cinnamon mask\n "
                    "5) Apply green tea to your skin\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Dapsone.\n "
                    "2) Retinoids and retinoid- medicinal drugs\n "
                    "3) Acnestar\n "
                    "4) Adapalene Gel\n "
                    "5) Tretinoin and adapalene- medicinal drugs\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in acne zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of acne zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//******************************************************************************
//ARTHRITIS FUNCTION
void medical::arthritis()
{
    cout << "You choose ARTHRITIS option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the arthritis are " << endl;
            cout << "1) Pain in infected area.\n"
                    "2) Stiffness\n"
                    "3) Decreased range of motion.\n"
                    "4) Redness.\n"
                    "5) Swelling.\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Losing weight by exercise, cycling, walking.\n"
                    " 2) Use hot and cold water therapy alternately\n "
                    "3) Try Acupuncture techniques in the infected area.\n "
                    "4) Use meditation to cope with pain\n "
                    "5) A healthy diet that’s rich in fresh fruits, vegetables, and whole foods\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Menthol or capsaicin and apply to counter it.\n "
                    "2) Tramadol (Ultram, ConZip), oxycodone (OxyContin, Roxicodone, others) or hydrocodone (Hysingla, Zohydro ER).\n "
                    "3) Nonsteroidal anti-inflammatory drugs (NSAIDs). NSAIDs reduce both pain and inflammation.\n "
                    "4) Methotrexate (Trexall, Rasuvo, others) and hydroxychloroquine (Plaquenil).\n "
                    "5) Corticosteroids.\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Some specialists are :-\n"
                    "1) Dr. Nimish Nanavati Add.-Nanavati Hospital,Vile Parle,Mumbai.\n"
                    "2) Dr. Darshan Singh Bhakuni Add.-Manipal Hospitals,Dwarka,New Delhi.\n"
                    "3) Dr. Ashok Kumar Add.-Fortis LT Rajan Dhall Hospital,Vasant kunj,New Delhi.\n"
                 << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in arthritis zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of arthritis zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//******************************************************************************
//CONJUNCTIVITIS FUNCTION
void medical::conjunctivitis()
{
    cout << "You choose CONJUNCTIVITIS option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the conjunctivitis are " << endl;
            cout << "1) Redness in eyes\n"
                    "2) Puss-Discharge fluid\n"
                    "3) itching and tearing\n"
                    "4) irritation and burning sensation\n"
                    "5) eye-sight weakness\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Wash your hands frequently to prevent spreading an existing infection to your other eye, and to other people.\n"
                    " 2) Don't rub your eyes.\n "
                    "3) Use a cool wet washcloth to soak off any crusting.\n "
                    "4) Use a warm or cool compress to reduce discomfort\n "
                    "5) Avoid wearing contact lenses and discard current lenses.\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Ophthalmic antibiotic eyedrops\n "
                    "2) Ointments such as Bleph\n "
                    "3) Romycin (erythromycin)\n "
                    "4) Ak-Tracin, Bacticin (bacitracin)\n "
                    "5) Ocumycin\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in conjunctivitis zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of conjunctivitis zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//*****************************************************************
//DIARRHEA FUNCTION
void medical::diarrhea()
{
    cout << "You choose DIARRHEA option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the diarrhea are " << endl;
            cout << "1) Watery, loose stools \n"
                    "2) Frequent bowel movements\n"
                    "3) Cramping or pain in the abdomen\n"
                    "4) Pain in nausea, bloating\n"
                    "5) Possibly fever or bloody stools, depending on the cause\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Hydrating the body is essential to recovering from diarrhea.\n"
                    " 2) A good diet having soft vegetables,fruit and adequate amounts of protein\n "
                    "3) BRAT diet means Bananas, Rice, Apple sauce, Toast\n "
                    "4) Avoid food conatins high-fat, spicy, greasy etc\n "
                    "5) Taking probiotics\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Antimotility drugs \n "
                    "2) Loperamide (Imodium)\n "
                    "3) Kaolin and morphine mixture\n "
                    "4) Codeine phosphate\n "
                    "5) Co-phenotrope\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Some specialists are :-\n"
                    "1) Dr. MP Sharma Add.-Medeor Hospital,Qutab,New Delhi.\n"
                    "2) Dr. Malathi Sathiyasekaran Add.-Rainbow Children Hospitals,Chennai.\n"
                    "3) Dr. KNK Shetty Add.-Manipal Hospital,Banglore.\n"
                 << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in diarrhea zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of diarrhea zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//MONONUCLEOSIS FUNCTION******************************************************
void medical::mononucleosis()
{
    cout << "You choose MONONUCLEOSIS option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the mononucleosis are " << endl;
            cout << "1) Extreme fatigue \n"
                    "2) Forcing the infected person to nap frequently \n"
                    "3) Swollen lymph glands and spleen\n"
                    "4) Sore throat, fever, loss of appetite\n"
                    "5) Muscle ache and unwellness in cavity\n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Drink plenty of water, fruit juice, herbal tea, soup, and broth.\n"
                    " 2) Throat gargles\n "
                    "3) Cool down a fever\n "
                    "4) Boost your immune system by leafy and healthy veges\n "
                    "5) Take rest as much you can\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Acetaminophen (Tylenol) \n "
                    "2) Ibuprofen (Advil)\n "
                    "3) Aspirin\n "
                    "4) Nimsuilide and Paracetamol\n "
                    "5) Probiotic supplements\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in mononucleosis zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of mononucleosis zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//STOMACH ACHES FUNCTION*********************************************************
void medical::stomach_aches()
{
    cout << "You choose STOMACH ACHES option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the stomach aches are " << endl;
            cout << "1) Excessive pain in stomach \n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Eat several smaller meals instead of three big ones\n"
                    " 2) Chew your food slowly and well\n "
                    "3) Stay away from foods that bother you (spicy or fried foods, for example)\n "
                    "4) Ease stress with exercise, meditation, or yoga\n "
                    "5) Take rest as much you can\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) Panadol\n "
                    "2) Liquiprine\n "
                    "3) Aspirin\n "
                    "4) Nimsuilide and Paracetamol\n "
                    "5) Desprine\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Any general docter can help" << endl;
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in stomach aches zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of stomach aches zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}

//CHICKENPOX FUNCTION******************************************************
void medical::chickenpox()
{
    cout << "You choose CHICKENPOX option" << endl;
    char ch, c;
    do
    {   label:
        cout << "Press S for symptoms \nPress H for Home made cure " << endl;
        cout << "Press M for Medicines \nPress D for Docter " << endl;
        cin >> ch;
        if (ch == 's' || ch == 'S')
        {
            cout << "Some symptoms for the chickenpox are " << endl;
            cout << "1) Excessive pain in body \n"
                    "2) Extremely itching and irritation \n"
                    "3) Red dot at the whole body specially at back and face \n"
                    "4) Feel Extremely cold due to fever sometimes \n"
                    "5) Restlessness and weakness in the body and lack of energy \n";
        }
        else if (ch == 'h' || ch == 'H')
        {
            cout << "Some Home made cure are " << endl;
            cout << " 1) Have fluids like juice, less warm water, milk with turmeric etc\n"
                    " 2) Have the leaves of neem at your bed and always keep it with you as well\n "
                    "3) Stay away from spicy and fried foods and have healthy and simple diet\n "
                    "4) Have more time at the bed and not to go outside of it\n "
                    "5) Take rest as much you can without contacting others\n ";
        }
        else if (ch == 'm' || ch == 'M')
        {
            cout << " 1) There is no proper medicine for this Virus\n "
                    "2) Paracetamol can be taken to reduce pain\n "
                    "3) Aspirin but less in quantity\n "
                    "4) Nimsuilide and Nimo may be help in body ache\n "
                    "5) Avil will help in itching problem\n ";
        }
        else if (ch == 'd' || ch == 'D')
        {
            cout << "Generally it can't be cured by doctor they just provide you the"
                    " medicines related to pain and itching and rest";
        }
        else
        {
            cout << "Please enter Valid Choice from options given below" << endl;
            goto label;
        }
        cout << "if you want to continue in chickenpox zone press Y otherwise N" << endl;
        cin >> c;
    } while (c == 'y' || c == 'Y');
    if (c == 'n' || c == 'N')
        cout << "you are out of chickenpox zone of medical query" << endl;
    cout << "Thanx for visiting us " << endl;
}


