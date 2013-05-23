// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/domevent_listener_cpptoc.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefDOMNode::Type CefDOMNodeCToCpp::GetType() {
  if (CEF_MEMBER_MISSING(struct_, get_type))
    return DOM_NODE_TYPE_UNSUPPORTED;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dom_node_type_t _retval = struct_->get_type(struct_);

  // Return type: simple
  return _retval;
}

bool CefDOMNodeCToCpp::IsText() {
  if (CEF_MEMBER_MISSING(struct_, is_text))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_text(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::IsElement() {
  if (CEF_MEMBER_MISSING(struct_, is_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_element(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::IsFormControlElement() {
  if (CEF_MEMBER_MISSING(struct_, is_form_control_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_form_control_element(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetFormControlElementType() {
  if (CEF_MEMBER_MISSING(struct_, get_form_control_element_type))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_form_control_element_type(
      struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::IsSame(CefRefPtr<CefDOMNode> that) {
  if (CEF_MEMBER_MISSING(struct_, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = struct_->is_same(struct_,
      CefDOMNodeCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetName() {
  if (CEF_MEMBER_MISSING(struct_, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDOMNodeCToCpp::GetValue() {
  if (CEF_MEMBER_MISSING(struct_, get_value))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_value(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::SetValue(const CefString& value) {
  if (CEF_MEMBER_MISSING(struct_, set_value))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = struct_->set_value(struct_,
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetAsMarkup() {
  if (CEF_MEMBER_MISSING(struct_, get_as_markup))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_as_markup(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefDOMDocument> CefDOMNodeCToCpp::GetDocument() {
  if (CEF_MEMBER_MISSING(struct_, get_document))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domdocument_t* _retval = struct_->get_document(struct_);

  // Return type: refptr_same
  return CefDOMDocumentCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetParent() {
  if (CEF_MEMBER_MISSING(struct_, get_parent))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = struct_->get_parent(struct_);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetPreviousSibling() {
  if (CEF_MEMBER_MISSING(struct_, get_previous_sibling))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = struct_->get_previous_sibling(struct_);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetNextSibling() {
  if (CEF_MEMBER_MISSING(struct_, get_next_sibling))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = struct_->get_next_sibling(struct_);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

bool CefDOMNodeCToCpp::HasChildren() {
  if (CEF_MEMBER_MISSING(struct_, has_children))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->has_children(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetFirstChild() {
  if (CEF_MEMBER_MISSING(struct_, get_first_child))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = struct_->get_first_child(struct_);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetLastChild() {
  if (CEF_MEMBER_MISSING(struct_, get_last_child))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = struct_->get_last_child(struct_);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

void CefDOMNodeCToCpp::AddEventListener(const CefString& eventType,
    CefRefPtr<CefDOMEventListener> listener, bool useCapture) {
  if (CEF_MEMBER_MISSING(struct_, add_event_listener))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: eventType; type: string_byref_const
  DCHECK(!eventType.empty());
  if (eventType.empty())
    return;
  // Verify param: listener; type: refptr_diff
  DCHECK(listener.get());
  if (!listener.get())
    return;

  // Execute
  struct_->add_event_listener(struct_,
      eventType.GetStruct(),
      CefDOMEventListenerCppToC::Wrap(listener),
      useCapture);
}

CefString CefDOMNodeCToCpp::GetElementTagName() {
  if (CEF_MEMBER_MISSING(struct_, get_element_tag_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_element_tag_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::HasElementAttributes() {
  if (CEF_MEMBER_MISSING(struct_, has_element_attributes))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->has_element_attributes(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::HasElementAttribute(const CefString& attrName) {
  if (CEF_MEMBER_MISSING(struct_, has_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;

  // Execute
  int _retval = struct_->has_element_attribute(struct_,
      attrName.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetElementAttribute(const CefString& attrName) {
  if (CEF_MEMBER_MISSING(struct_, get_element_attribute))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval = struct_->get_element_attribute(struct_,
      attrName.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefDOMNodeCToCpp::GetElementAttributes(AttributeMap& attrMap) {
  if (CEF_MEMBER_MISSING(struct_, get_element_attributes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: attrMap; type: string_map_single_byref
  cef_string_map_t attrMapMap = cef_string_map_alloc();
  DCHECK(attrMapMap);
  if (attrMapMap)
    transfer_string_map_contents(attrMap, attrMapMap);

  // Execute
  struct_->get_element_attributes(struct_,
      attrMapMap);

  // Restore param:attrMap; type: string_map_single_byref
  if (attrMapMap) {
    attrMap.clear();
    transfer_string_map_contents(attrMapMap, attrMap);
    cef_string_map_free(attrMapMap);
  }
}

bool CefDOMNodeCToCpp::SetElementAttribute(const CefString& attrName,
    const CefString& value) {
  if (CEF_MEMBER_MISSING(struct_, set_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;
  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = struct_->set_element_attribute(struct_,
      attrName.GetStruct(),
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetElementInnerText() {
  if (CEF_MEMBER_MISSING(struct_, get_element_inner_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_element_inner_text(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefDOMNodeCToCpp, CefDOMNode,
    cef_domnode_t>::DebugObjCt = 0;
#endif
