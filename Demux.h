
class Demux{
      private:
             vector<input_struct> clientInfo; 
             
      public:
             demuxHandler(input_struct);
             addHandler(input_struct);
             registerHandler(input_struct);
             dispatchHandler(input_struct);
             unregister();
      ~Demux();
}

