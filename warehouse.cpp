#include<iostream>
#include<string>
using namespace std;
void item_management()
{
    int itemID,reorder_level,item_qty,search_id,update_id;
    string item_name,unit,batch;
    int ch1;
    do
    {
        cout<<"\n1.Add item"<<endl<<"2.View Items"<<endl<<"3.Search item"<<endl<<"4.Update item"<<endl
        <<"5.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
            {
                cout<<"Enter item ID: ";
                cin>>itemID;
                cout<<"Enter Item Name: ";
                cin>>item_name;
                cout<<"Enter Item Quantity: ";
                cin>>item_qty;
                cout<<"Enter Batch: ";
                cin>>batch;
                cout<<"Enter reorder_level: ";
                cin>>reorder_level;
                cout<<"Enter the unit: ";
                cin>>unit;
                break;
            }
            case 2:
            {
                cout<<"Item ID: "<<itemID<<endl;
                cout<<"Item Name: "<<item_name<<endl;
                cout<<"Item Quantity: "<<item_qty<<endl;
                cout<<"Batch: "<<batch<<endl;
                cout<<"Reorder Level: "<<reorder_level<<endl;
                cout<<"Unit: "<<unit<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enthe the search element ID: ";
                cin>>search_id;
                if(search_id == itemID)
                {
                    cout<<"Search element present: ";
                    cout<<"Name: "<<item_name<<endl;
                    cout<<"Quantity Available: "<<item_qty<<endl;
                }
                else
                {
                    cout<<"\nSearch element not found.";
                }
                break;
            }
            case 4:
            {
                cout<<"\nEnter the item to be updated:";
                cin>>update_id;
                cout<<"\nEnter the name to be updated:";
                cin>>item_name;
                cout<<"\nEnter update Quantity:";
                cin>>item_qty;
                break;
            }
            case 5:
            {
                cout<<"Process Successfully completed."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
            
        }
    }while(ch1!=5);
    
}
void storage_management()
{
    int locID,capacity,search_id,update_id;
    string zone,rack,bin;
    int ch2;
    do
    {
        cout<<"\n1.Add Location"<<endl<<"2.View Locations"<<endl<<"3.Search Location"<<endl<<"4.Update Location"<<endl
        <<"5.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch2;
        switch(ch2)
        {
            case 1:
            {
                cout<<"Enter Location ID: ";
                cin>>locID;
                cout<<"Enter Zone: ";
                cin>>zone;
                cout<<"Enter Rack: ";
                cin>>rack;
                cout<<"Enter Bin: ";
                cin>>bin;
                cout<<"Enter Capacity: ";
                cin>>capacity;
                break;
            }
            case 2:
            {
                cout<<"Location ID: "<<locID<<endl;
                cout<<"Zone: "<<zone<<endl;
                cout<<"Rack: "<<rack<<endl;
                cout<<"Bin: "<<bin<<endl;
                cout<<"Capacity: "<<capacity<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter the search element ID: ";
                cin>>search_id;
                if(search_id == locID)
                {
                    cout<<"Search element present: "<<endl;
                    cout<<"Zone: "<<zone<<endl;
                    cout<<"Rack: "<<rack<<endl;
                    cout<<"Bin: "<<bin<<endl;
                    cout<<"Capacity: "<<capacity<<endl;
                }
                else
                {
                    cout<<"\nSearch element not found.";
                }
                break;
            }
            case 4:
            {
                cout<<"\nEnter the location to be updated: ";
                cin>>update_id;
                if(update_id == locID)
                {
                    cout<<"Enter the new Zone: ";
                    cin>>zone;
                    cout<<"Enter the new Rack: ";
                    cin>>rack;
                    cout<<"Enter the new Bin: ";
                    cin>>bin;
                    cout<<"Enter the new Capacity: ";
                    cin>>capacity;
                }
                else
                {
                    cout<<"Location not found.";
                }
                break;
            }
            case 5:
            {
                cout<<"Process Successfully completed."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch2!=5);
}
void goods_receipt()
{
    int recID,itemID,rec_qty,accepted_qty,rejected_qty,search_id,update_id;
    string supp_name,batch,rec_date,status;
    int ch3;
    do
    {
        cout<<"\n1.Add Goods Receipt"<<endl<<"2.View Receipt"<<endl<<"3.Search Receipt"<<endl
        <<"4.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch3;
        switch(ch3)
        {
            case 1:
            {
                cout<<"Enter Receipt ID: ";
                cin>>recID;
                cout<<"Enter Item ID: ";
                cin>>itemID;
                cout<<"Enter Supplier Name: ";
                cin>>supp_name;
                cout<<"Enter Received Quantity: ";
                cin>>rec_qty;
                cout<<"Enter Batch: ";
                cin>>batch;
                cout<<"Enter Received Date: ";
                cin>>rec_date;
                cout<<"Enter Accepted Quantity: ";
                cin>>accepted_qty;
                cout<<"Enter Rejected Quantity: ";
                cin>>rejected_qty;
                cout<<"Enter Inspection Status: ";
                cin>>status;
                break;
            }
            case 2:
            {
                cout<<"Receipt ID: "<<recID<<endl;
                cout<<"Item ID: "<<itemID<<endl;
                cout<<"Supplier Name: "<<supp_name<<endl;
                cout<<"Received Quantity: "<<rec_qty<<endl;
                cout<<"Batch: "<<batch<<endl;
                cout<<"Received Date: "<<rec_date<<endl;
                cout<<"Accepted Quantity: "<<accepted_qty<<endl;
                cout<<"Rejected Quantity: "<<rejected_qty<<endl;
                cout<<"Inspection Status: "<<status<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter the search Receipt ID: ";
                cin>>search_id;
                if(search_id == recID)
                {
                    cout<<"Receipt Found."<<endl;
                    cout<<"Item ID: "<<itemID<<endl;
                    cout<<"Supplier Name: "<<supp_name<<endl;
                    cout<<"Received Quantity: "<<rec_qty<<endl;
                    cout<<"Batch: "<<batch<<endl;
                    cout<<"Inspection Status: "<<status<<endl;
                }
                else
                {
                    cout<<"Receipt not found.";
                }
                break;
            }
            case 4:
            {
                cout<<"Process Successfully completed."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch3!=4);
}
void inventory_management()
{
    int itemID,onhand,reserved,damaged,available,reorder_level;
    int ch4;
    do
    {
        cout<<"\n1.View Inventory"<<endl<<"2.Check Available Stock"<<endl<<"3.Check Low Stock"<<endl
        <<"4.View Damaged Stock"<<endl<<"5.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch4;
        switch(ch4)
        {
            case 1:
            {
                cout<<"Enter Item ID: ";
                cin>>itemID;
                cout<<"Enter On-Hand Quantity: ";
                cin>>onhand;
                cout<<"Enter Reserved Quantity: ";
                cin>>reserved;
                cout<<"Enter Damaged Quantity: ";
                cin>>damaged;
                cout<<"Enter Reorder Level: ";
                cin>>reorder_level;

                available=onhand-reserved-damaged;

                cout<<"Item ID: "<<itemID<<endl;
                cout<<"On-Hand Quantity: "<<onhand<<endl;
                cout<<"Reserved Quantity: "<<reserved<<endl;
                cout<<"Damaged Quantity: "<<damaged<<endl;
                cout<<"Available Quantity: "<<available<<endl;
                break;
            }
            case 2:
            {
                available=onhand-reserved-damaged;
                cout<<"Available Stock: "<<available<<endl;
                break;
            }
            case 3:
            {
                if(available<=reorder_level)
                {
                    cout<<"Low Stock Alert!"<<endl;
                }
                else
                {
                    cout<<"Stock Level is Normal."<<endl;
                }
                break;
            }
            case 4:
            {
                cout<<"Damaged Stock: "<<damaged<<endl;
                break;
            }
            case 5:
            {
                cout<<"Returning to Main Menu..."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch4!=5);
}
void stock_movement()
{
    int itemID,sourceID,destID,quantity,onhand,adjust_qty;
    string reason;
    int ch5;
    do
    {
        cout<<"\n1.Transfer Stock"<<endl<<"2.Adjust Stock"<<endl<<"3.View Movement Details"<<endl
        <<"4.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch5;
        switch(ch5)
        {
            case 1:
            {
                cout<<"Enter Item ID: ";
                cin>>itemID;
                cout<<"Enter Source Location ID: ";
                cin>>sourceID;
                cout<<"Enter Destination Location ID: ";
                cin>>destID;
                cout<<"Enter Transfer Quantity: ";
                cin>>quantity;
                cout<<"Stock Transferred Successfully."<<endl;
                break;
            }
            case 2:
            {
                cout<<"Enter Item ID: ";
                cin>>itemID;
                cout<<"Enter Current Stock: ";
                cin>>onhand;
                cout<<"Enter Adjustment Quantity: ";
                cin>>adjust_qty;
                cout<<"Enter Reason for Adjustment: ";
                cin>>reason;
                onhand=onhand+adjust_qty;
                cout<<"Updated Stock: "<<onhand<<endl;
                break;
            }
            case 3:
            {
                cout<<"Item ID: "<<itemID<<endl;
                cout<<"Source Location: "<<sourceID<<endl;
                cout<<"Destination Location: "<<destID<<endl;
                cout<<"Transfer Quantity: "<<quantity<<endl;
                break;
            }
            case 4:
            {
                cout<<"Returning to Main Menu..."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch5!=4);
}
void picking_dispatch()
{
    int orderID,itemID,req_qty,pic_qty,remaining_qty;
    string destination,status;
    int ch6;
    do
    {
        cout<<"\n1.Create Dispatch Order"<<endl<<"2.Generate Picking List"<<endl
        <<"3.Confirm Picking"<<endl<<"4.Dispatch Goods"<<endl
        <<"5.View Order Details"<<endl<<"6.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch6;
        switch(ch6)
        {
            case 1:
            {
                cout<<"Enter Order ID: ";
                cin>>orderID;
                cout<<"Enter Item ID: ";
                cin>>itemID;
                cout<<"Enter Required Quantity: ";
                cin>>req_qty;
                cout<<"Enter Destination: ";
                cin>>destination;
                status="Pending";
                cout<<"Dispatch Order Created Successfully."<<endl;
                break;
            }
            case 2:
            {
                cout<<"Order ID: "<<orderID<<endl;
                cout<<"Item ID: "<<itemID<<endl;
                cout<<"Picking Quantity: "<<req_qty<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter Picked Quantity: ";
                cin>>pic_qty;
                remaining_qty=req_qty-pic_qty;
                cout<<"Picked Quantity: "<<pic_qty<<endl;
                cout<<"Remaining Quantity: "<<remaining_qty<<endl;
                break;
            }
            case 4:
            {
                if(pic_qty==req_qty)
                {
                    status="Dispatched";
                    cout<<"Goods Dispatched Successfully."<<endl;
                }
                else
                {
                    cout<<"Order is not completely picked."<<endl;
                }
                break;
            }
            case 5:
            {
                cout<<"Order ID: "<<orderID<<endl;
                cout<<"Item ID: "<<itemID<<endl;
                cout<<"Required Quantity: "<<req_qty<<endl;
                cout<<"Picked Quantity: "<<pic_qty<<endl;
                cout<<"Destination: "<<destination<<endl;
                cout<<"Status: "<<status<<endl;
                break;
            }
            case 6:
            {
                cout<<"Returning to Main Menu..."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch6!=6);
}
void reports()
{
    int ch7;
    do
    {
        cout<<"\n1.Stock Ledger"<<endl<<"2.Location Utilization"<<endl
        <<"3.Pending Picks"<<endl<<"4.Dispatch Status"<<endl
        <<"5.Low Stock Report"<<endl<<"6.Damaged Stock Report"<<endl
        <<"7.Movement History"<<endl<<"8.Back to main menu"<<endl;
        cout<<"Enter Your choice:";
        cin>>ch7;
        switch(ch7)
        {
            case 1:
            {
                cout<<"Displaying Stock Ledger."<<endl;
                break;
            }
            case 2:
            {
                cout<<"Displaying Location Utilization."<<endl;
                break;
            }
            case 3:
            {
                cout<<"Displaying Pending Picks."<<endl;
                break;
            }
            case 4:
            {
                cout<<"Displaying Dispatch Status."<<endl;
                break;
            }
            case 5:
            {
                cout<<"Displaying Low Stock Report."<<endl;
                break;
            }
            case 6:
            {
                cout<<"Displaying Damaged Stock Report."<<endl;
                break;
            }
            case 7:
            {
                cout<<"Displaying Movement History."<<endl;
                break;
            }
            case 8:
            {
                cout<<"Returning to Main Menu..."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid input."<<endl;
            }
        }
    }while(ch7!=8);
}
int main()
{
    int locID,capacity,recID,onhand,sourceID,orderID,req_qty,pic_qty,totitems,lowstock,totalstock;
    string unit,zone,rack,bin,supp_name,destination;
    int choice;
    do
    {
        cout<<"====================================================================="<<endl;
        cout<<"=====================Warehouse Management System====================="<<endl;
        cout<<"                                 Menu                                "<<endl;
        cout<<"1.Item Management"<<endl<<"2.Storage Management"<<endl<<"3.Goods Receipt"<<endl<<"4.Inventory Management"
            <<endl<<"5.Stock Management"<<endl<<"6.Picking & Dispatch"<<endl<<"7.Reports"<<endl<<"8.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            item_management();
            break;
        }
        case 2:
        {
            storage_management();
            break;
        }
        case 3:
        {
            goods_receipt();
            break;
        }
        case 4:
        {
            inventory_management();
            break;
        }
        case 5:
        {
            stock_movement();
            break;
        }
        case 6:
        {
            picking_dispatch();
            break;
        }
        case 7:
        {
            reports();
            break;
        }
        case 8:
        {
            cout<<"";
            break;
        }
        default:
        {
            cout<<"Invalid Input.";
        }
        }
    }while(choice!=8);
    return 0;
}