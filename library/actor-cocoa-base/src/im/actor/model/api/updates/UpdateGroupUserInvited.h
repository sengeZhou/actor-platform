//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/api/updates/UpdateGroupUserInvited.java
//

#ifndef _APUpdateGroupUserInvited_H_
#define _APUpdateGroupUserInvited_H_

#include "J2ObjC_header.h"
#include "im/actor/model/network/parser/Update.h"

@class BSBserValues;
@class BSBserWriter;
@class IOSByteArray;

#define APUpdateGroupUserInvited_HEADER 21

@interface APUpdateGroupUserInvited : APUpdate

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                   withLong:(jlong)rid
                    withInt:(jint)uid
                    withInt:(jint)inviterUid
                   withLong:(jlong)date;

+ (APUpdateGroupUserInvited *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (jint)getInviterUid;

- (jlong)getRid;

- (jint)getUid;

- (void)parseWithBSBserValues:(BSBserValues *)values;

- (void)serializeWithBSBserWriter:(BSBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(APUpdateGroupUserInvited)

J2OBJC_STATIC_FIELD_GETTER(APUpdateGroupUserInvited, HEADER, jint)

FOUNDATION_EXPORT APUpdateGroupUserInvited *APUpdateGroupUserInvited_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void APUpdateGroupUserInvited_initWithInt_withLong_withInt_withInt_withLong_(APUpdateGroupUserInvited *self, jint groupId, jlong rid, jint uid, jint inviterUid, jlong date);

FOUNDATION_EXPORT APUpdateGroupUserInvited *new_APUpdateGroupUserInvited_initWithInt_withLong_withInt_withInt_withLong_(jint groupId, jlong rid, jint uid, jint inviterUid, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void APUpdateGroupUserInvited_init(APUpdateGroupUserInvited *self);

FOUNDATION_EXPORT APUpdateGroupUserInvited *new_APUpdateGroupUserInvited_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(APUpdateGroupUserInvited)

typedef APUpdateGroupUserInvited ImActorModelApiUpdatesUpdateGroupUserInvited;

#endif // _APUpdateGroupUserInvited_H_
