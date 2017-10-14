Demux::Demux(){
}

Demux::~Demux(){
       unregister();               
}
bool Demux::addHandler(input_struct){
     
     for(int i=0;i<clientInfo.size();++i){
             if(clientInfo[i].id==input_struct.id){
                    return false;
             }
     }     
     clientInfo.push_back(input_struct);
     return true;
}



void Demux::demuxHandler(input_struct){
     
     
        if(addHandler(input_struct)==false){
                cout<<"client is already added"<<endl;
        }
        registerHandler(input_struct);
        dispatchHandler(input_struct);
}

void Demux::registerHandler(input_struct){
     
     //call the register Initiate Dispatcher
}

void Demux::DispatchHandler(input_struct){
     //dispatch Handler
}


