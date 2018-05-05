//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QDataCacheProtocol-Protocol.h"

@class NSString;

@interface QDataCacheBase : NSObject <QDataCacheProtocol>
{
    NSString *_name;
    NSString *_styleName;
    unsigned long long _mapLanguage;
    NSString *_languageCode;
    NSString *_basePath;
}

@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) unsigned long long mapLanguage; // @synthesize mapLanguage=_mapLanguage;
@property(copy, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithStyle:(id)arg1 version:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) NSString *rootName;
- (void)setupSelf:(id)arg1;
@property(copy, nonatomic) NSString *version;
- (void)clearTileCache;
- (void)clearCacheByPath:(id)arg1;
- (void)clearCache:(_Bool)arg1;
- (id)getCacheData:(id)arg1;
- (_Bool)putCacheData:(id)arg1;
@property(readonly, nonatomic) NSString *logoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
