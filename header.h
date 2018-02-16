/**********************************************************************
 * Mason Godfrey, Tristan Ligtvoet, Mitchell O'Hair, Kenneth Casimiro *
 * Mon,Wed 1:30p * Bulk Club * Document created during Sprint 1       *
 **********************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

//using namespace std; - Use namespaces PER FILE, not in header.

#define SHOPPERS_HF
#ifdef SHOPPERS_HF
#include "shoppers.h"
#endif

#ifdef INVENTORY_HF
#include "inventory.h"
#endif

#ifdef DAILYLOG_HF
#include "dailylog.h"
#endif

#ifdef MANAGERS_HF
#include "managers.h"
#endif



#endif /* HEADER_H_ */
