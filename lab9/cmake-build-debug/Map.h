//
// Created by Andrada on 25/05/2023.
//

#ifndef LAB9_MAP_H
#define LAB9_MAP_H

template <class K, class V>
class Map {
    struct elements{
        K key;
        V value;
        int index;
    };
    elements* argList = new elements[5];
    int nr=0;
public:
    V& operator[](int key){
        int i;
        for(i=0; i < nr; i++)
        {
            if(key== argList[i].key)
                return argList[i].value;
        }
        argList[nr].key=key;
        argList[nr].index=nr;
        nr++;
        return argList[nr-1].value;

    }
    void Set( K key,V value) {
        int ok = 0;
        for (int i = 0; i < nr; i++)
        {
            if (argList[i].key == key)
            {
                ok = 1;
                argList[i].value = value;
                break;

            }
        }
        if (ok == 0) {

            argList[nr].key = key;
            argList[nr].value = value;
            argList[nr].index = nr;
            nr++;
        }
    }
    bool Get(const K& key,V& value){
        for (int i = 0; i < nr; i++)
        {

            if (argList[i].key == key)
                value = argList[i].value;
            return true;
        }
        return false;

    }
    int getCount(){
        return nr;
    }
    void Clear(){
        nr=0;
        delete[]argList;
    }
    bool Delete(const K& key){
        for(int i=0 ;i<nr; i++)
        {
            if(argList[i].key==key){
                for(int j=i+1; j< nr;j++)
                {
                    argList[j].index--;
                    argList[j-1]=argList[j];
                }
                nr--;
                return true;
            }
        }
        return false;
    }
    bool Includes(const Map<K,V>& newMap){
        int ok=0;
        for(int j=0; j<newMap.nr;j++){
            K key1= newMap.argList[j].key;
            ok=0;
            for(int i=0;i<nr;i++)
            {
                if(argList[i].key==key1)
                    ok=1;
            }
            if(ok==0) return false;
        }
        return true;
    }
    elements* begin(){
        return &argList[0];
    }
    elements* end(){
        return &argList[nr];
    }
};

#endif //LAB9_MAP_H
