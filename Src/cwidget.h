#ifndef CWIDGET_H
#define CWIDGET_H
#include <string>

using namespace std;

class CMenuPage;

class CWidget
{
public:
    CWidget();
    virtual void leftAction(void) = 0;
    virtual void rightAction(void) = 0;
    virtual string getText(void) = 0;
    virtual CMenuPage *isNewMenu(void) = 0;
protected:
    string m_sMenuName;
};

#endif // CWIDGET_H
