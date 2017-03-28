//
// Created by marius on 28/03/2017.
//

#ifndef TUTORIAT_DATA_H
#define TUTORIAT_DATA_H

class Data {
    int zi, luna, an;
public:
    Data(int zi, int luna, int an);
    int getZi() const;
    int getLuna() const;
    int getAn() const;
};

#endif //TUTORIAT_DATA_H
