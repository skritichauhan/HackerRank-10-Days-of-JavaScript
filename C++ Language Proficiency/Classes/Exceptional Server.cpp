

		/* Enter your code here. */
    try
    {
        cout<<Server::compute(A,B)<<endl;
    }
    
    catch (bad_alloc& ba)
    {
        cout<<"Not enough memory"<<endl;
    }
    catch ( exception& ex)
    {
        cout<<"Exception: "<<ex.what()<<endl;
    }
    catch (...)
    {
        cout<<"Other Exception"<<endl;
    }

