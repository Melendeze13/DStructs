/* *
 * MIT License
 *
 * Copyright (c) 2016 Daniel Santos
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * */
#ifndef DSTRUCTS_TREE_NODE_H
#define DSTRUCTS_TREE_NODE_H

namespace DStructs {

// Forward declaration of the Binary Search Tree class.
template <class T> class BST;

template <class T>
class BinaryTreeNode {
  friend class BST<T>;
 public:
  /**
   * \brief     This an explicit constructor of the node.
   *
   * \param     const T&
   * */
  explicit BinaryTreeNode(const T& data);
  /**
   * \brief     This constructor takes the left and the right node and also
   * the data that the node will contain.
   *
   * \param     BinaryTreeNode&, const T&, BinaryTreeNode&
   * */
  BinaryTreeNode(BinaryTreeNode &left,
                 const T &data,
                 BinaryTreeNode &right);
  /**
   * \brief     Data getter
   *
   * \return    T&
   * */
  const T& get_data() const;
 private:
  BinaryTreeNode<T>* left_;  //< Pointer to the left node
  T                  data_;  //< Data in the node
  BinaryTreeNode<T>* right_; //< Pointer to the right node

};

} // DSTRUCTS NAMESPACE

#include "binary_tree_node.cc"

#endif //DSTRUCTS_TREE_NODE_H
