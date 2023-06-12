//
// Created by Liplum on 6/12/2023.
//

#ifndef PRODMANAGESYS_UI_H
#define PRODMANAGESYS_UI_H

#include "auth.h"
#include "product.h"

namespace ui {
// Function to add a new product
  void addProduct(ProductSet &products);

// Function to delete a product
  void deleteProduct(ProductSet &products);

// Function to modify a product
  void modifyProduct(ProductSet &products);

// Function to search for a product by name or ID
  void searchProduct(ProductSet &products);

  bool addUser(Auth &auth);

  bool modifyUser(Auth &auth);

  bool deleteUser(Auth &auth, User &curUser);

  /**
   * wildcard enabled.
   * @param auth
   */
  void searchUser(Auth &auth);

  void clearScreen();
}
#endif //PRODMANAGESYS_UI_H
