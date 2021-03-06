//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSString, NSURL, RLMSchema;

@interface RLMRealmConfiguration : NSObject <NSCopying>
{
    struct Config {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> path;
        struct BinaryData realm_data;
        struct vector<char, std::__1::allocator<char>> encryption_key;
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> fifo_files_fallback_path;
        BOOL in_memory;
        unsigned char schema_mode;
        struct Optional<realm::Schema> schema;
        NSUInteger schema_version;
        struct function<void (std::__1::shared_ptr<realm::Realm>, std::__1::shared_ptr<realm::Realm>, realm::Schema &)> migration_function;
        struct function<void (std::__1::shared_ptr<realm::Realm>)> initialization_function;
        struct function<bool (unsigned long long, unsigned long long)> should_compact_on_launch_function;
        BOOL cache;
        BOOL disable_format_upgrade;
        BOOL automatic_change_notifications;
        struct Optional<unsigned long> execution_context;
        struct shared_ptr<realm::SyncConfig> sync_config;
        BOOL force_sync_history;
        struct function<std::__1::shared_ptr<realm::AuditInterface>()> audit_factory;
    } _config;
    BOOL _cache;
    BOOL _dynamic;
    id /* CDUnknownBlockType */ _migrationBlock;
    id /* CDUnknownBlockType */ _shouldCompactOnLaunch;
    RLMSchema *_customSchema;
    NSString *_pathOnDisk;
}

+ (void)resetRealmConfigurationState;
+ (id)rawDefaultConfiguration;
+ (void)setDefaultConfiguration:(id)arg1;
+ (id)defaultConfiguration;
+ (id)wf_configurationWithDirectoryURL:(id)arg1 filename:(id)arg2;
+ (id)wf_configurationWithAppGroupIdentifier:(id)arg1 filename:(id)arg2;
+ (id)wf_inMemoryConfigurationWithIdentifier:(id)arg1;
+ (id)wf_inMemoryConfiguration;
+ (id)wf_workflowConfiguration;
+ (id)wf_appStoreShortcutsConfiguration;
+ (id)wf_systemShortcutsConfiguration;
+ (id)wf_shortcutsDirectoryURL;
@property(copy, nonatomic) NSString *pathOnDisk; // @synthesize pathOnDisk=_pathOnDisk;
@property(copy, nonatomic) RLMSchema *customSchema; // @synthesize customSchema=_customSchema;
@property(nonatomic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) BOOL cache; // @synthesize cache=_cache;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shouldCompactOnLaunch; // @synthesize shouldCompactOnLaunch=_shouldCompactOnLaunch;
@property(copy, nonatomic) id /* CDUnknownBlockType */ migrationBlock; // @synthesize migrationBlock=_migrationBlock;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)syncConfiguration;
- (void)setCustomSchemaWithoutCopying:(id)arg1;
- (void)setSchemaMode:(unsigned char)arg1;
- (unsigned char)schemaMode;
@property(nonatomic) BOOL disableFormatUpgrade;
@property(copy, nonatomic) NSArray *objectClasses;
@property(nonatomic) BOOL deleteRealmIfMigrationNeeded;
@property(nonatomic) NSUInteger schemaVersion;
@property(nonatomic) BOOL readOnly;
@property(copy, nonatomic) NSData *encryptionKey;
@property(copy, nonatomic) NSString *inMemoryIdentifier;
@property(copy, nonatomic) NSURL *fileURL;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (struct Config )config;
@property(readonly, nonatomic) NSArray *allRealmFileURLs;

@end

