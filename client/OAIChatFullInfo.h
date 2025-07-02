/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIChatFullInfo.h
 *
 * This object contains full information about a chat.
 */

#ifndef OAIChatFullInfo_H
#define OAIChatFullInfo_H

#include <QJsonObject>

#include "OAIAcceptedGiftTypes.h"
#include "OAIBirthdate.h"
#include "OAIBusinessIntro.h"
#include "OAIBusinessLocation.h"
#include "OAIBusinessOpeningHours.h"
#include "OAIChat.h"
#include "OAIChatLocation.h"
#include "OAIChatPermissions.h"
#include "OAIChatPhoto.h"
#include "OAIMessage.h"
#include "OAIReactionType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIAcceptedGiftTypes;
class OAIChatPhoto;
class OAIBirthdate;
class OAIBusinessIntro;
class OAIBusinessLocation;
class OAIBusinessOpeningHours;
class OAIChat;
class OAIReactionType;
class OAIMessage;
class OAIChatPermissions;
class OAIChatLocation;

class OAIChatFullInfo : public OAIObject {
public:
    OAIChatFullInfo();
    OAIChatFullInfo(QString json);
    ~OAIChatFullInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getAccentColorId() const;
    void setAccentColorId(const qint32 &accent_color_id);
    bool is_accent_color_id_Set() const;
    bool is_accent_color_id_Valid() const;

    qint32 getMaxReactionCount() const;
    void setMaxReactionCount(const qint32 &max_reaction_count);
    bool is_max_reaction_count_Set() const;
    bool is_max_reaction_count_Valid() const;

    OAIAcceptedGiftTypes getAcceptedGiftTypes() const;
    void setAcceptedGiftTypes(const OAIAcceptedGiftTypes &accepted_gift_types);
    bool is_accepted_gift_types_Set() const;
    bool is_accepted_gift_types_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getUsername() const;
    void setUsername(const QString &username);
    bool is_username_Set() const;
    bool is_username_Valid() const;

    QString getFirstName() const;
    void setFirstName(const QString &first_name);
    bool is_first_name_Set() const;
    bool is_first_name_Valid() const;

    QString getLastName() const;
    void setLastName(const QString &last_name);
    bool is_last_name_Set() const;
    bool is_last_name_Valid() const;

    bool isIsForum() const;
    void setIsForum(const bool &is_forum);
    bool is_is_forum_Set() const;
    bool is_is_forum_Valid() const;

    OAIChatPhoto getPhoto() const;
    void setPhoto(const OAIChatPhoto &photo);
    bool is_photo_Set() const;
    bool is_photo_Valid() const;

    QList<QString> getActiveUsernames() const;
    void setActiveUsernames(const QList<QString> &active_usernames);
    bool is_active_usernames_Set() const;
    bool is_active_usernames_Valid() const;

    OAIBirthdate getBirthdate() const;
    void setBirthdate(const OAIBirthdate &birthdate);
    bool is_birthdate_Set() const;
    bool is_birthdate_Valid() const;

    OAIBusinessIntro getBusinessIntro() const;
    void setBusinessIntro(const OAIBusinessIntro &business_intro);
    bool is_business_intro_Set() const;
    bool is_business_intro_Valid() const;

    OAIBusinessLocation getBusinessLocation() const;
    void setBusinessLocation(const OAIBusinessLocation &business_location);
    bool is_business_location_Set() const;
    bool is_business_location_Valid() const;

    OAIBusinessOpeningHours getBusinessOpeningHours() const;
    void setBusinessOpeningHours(const OAIBusinessOpeningHours &business_opening_hours);
    bool is_business_opening_hours_Set() const;
    bool is_business_opening_hours_Valid() const;

    OAIChat getPersonalChat() const;
    void setPersonalChat(const OAIChat &personal_chat);
    bool is_personal_chat_Set() const;
    bool is_personal_chat_Valid() const;

    QList<OAIReactionType> getAvailableReactions() const;
    void setAvailableReactions(const QList<OAIReactionType> &available_reactions);
    bool is_available_reactions_Set() const;
    bool is_available_reactions_Valid() const;

    QString getBackgroundCustomEmojiId() const;
    void setBackgroundCustomEmojiId(const QString &background_custom_emoji_id);
    bool is_background_custom_emoji_id_Set() const;
    bool is_background_custom_emoji_id_Valid() const;

    qint32 getProfileAccentColorId() const;
    void setProfileAccentColorId(const qint32 &profile_accent_color_id);
    bool is_profile_accent_color_id_Set() const;
    bool is_profile_accent_color_id_Valid() const;

    QString getProfileBackgroundCustomEmojiId() const;
    void setProfileBackgroundCustomEmojiId(const QString &profile_background_custom_emoji_id);
    bool is_profile_background_custom_emoji_id_Set() const;
    bool is_profile_background_custom_emoji_id_Valid() const;

    QString getEmojiStatusCustomEmojiId() const;
    void setEmojiStatusCustomEmojiId(const QString &emoji_status_custom_emoji_id);
    bool is_emoji_status_custom_emoji_id_Set() const;
    bool is_emoji_status_custom_emoji_id_Valid() const;

    qint32 getEmojiStatusExpirationDate() const;
    void setEmojiStatusExpirationDate(const qint32 &emoji_status_expiration_date);
    bool is_emoji_status_expiration_date_Set() const;
    bool is_emoji_status_expiration_date_Valid() const;

    QString getBio() const;
    void setBio(const QString &bio);
    bool is_bio_Set() const;
    bool is_bio_Valid() const;

    bool isHasPrivateForwards() const;
    void setHasPrivateForwards(const bool &has_private_forwards);
    bool is_has_private_forwards_Set() const;
    bool is_has_private_forwards_Valid() const;

    bool isHasRestrictedVoiceAndVideoMessages() const;
    void setHasRestrictedVoiceAndVideoMessages(const bool &has_restricted_voice_and_video_messages);
    bool is_has_restricted_voice_and_video_messages_Set() const;
    bool is_has_restricted_voice_and_video_messages_Valid() const;

    bool isJoinToSendMessages() const;
    void setJoinToSendMessages(const bool &join_to_send_messages);
    bool is_join_to_send_messages_Set() const;
    bool is_join_to_send_messages_Valid() const;

    bool isJoinByRequest() const;
    void setJoinByRequest(const bool &join_by_request);
    bool is_join_by_request_Set() const;
    bool is_join_by_request_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getInviteLink() const;
    void setInviteLink(const QString &invite_link);
    bool is_invite_link_Set() const;
    bool is_invite_link_Valid() const;

    OAIMessage getPinnedMessage() const;
    void setPinnedMessage(const OAIMessage &pinned_message);
    bool is_pinned_message_Set() const;
    bool is_pinned_message_Valid() const;

    OAIChatPermissions getPermissions() const;
    void setPermissions(const OAIChatPermissions &permissions);
    bool is_permissions_Set() const;
    bool is_permissions_Valid() const;

    bool isCanSendPaidMedia() const;
    void setCanSendPaidMedia(const bool &can_send_paid_media);
    bool is_can_send_paid_media_Set() const;
    bool is_can_send_paid_media_Valid() const;

    qint32 getSlowModeDelay() const;
    void setSlowModeDelay(const qint32 &slow_mode_delay);
    bool is_slow_mode_delay_Set() const;
    bool is_slow_mode_delay_Valid() const;

    qint32 getUnrestrictBoostCount() const;
    void setUnrestrictBoostCount(const qint32 &unrestrict_boost_count);
    bool is_unrestrict_boost_count_Set() const;
    bool is_unrestrict_boost_count_Valid() const;

    qint32 getMessageAutoDeleteTime() const;
    void setMessageAutoDeleteTime(const qint32 &message_auto_delete_time);
    bool is_message_auto_delete_time_Set() const;
    bool is_message_auto_delete_time_Valid() const;

    bool isHasAggressiveAntiSpamEnabled() const;
    void setHasAggressiveAntiSpamEnabled(const bool &has_aggressive_anti_spam_enabled);
    bool is_has_aggressive_anti_spam_enabled_Set() const;
    bool is_has_aggressive_anti_spam_enabled_Valid() const;

    bool isHasHiddenMembers() const;
    void setHasHiddenMembers(const bool &has_hidden_members);
    bool is_has_hidden_members_Set() const;
    bool is_has_hidden_members_Valid() const;

    bool isHasProtectedContent() const;
    void setHasProtectedContent(const bool &has_protected_content);
    bool is_has_protected_content_Set() const;
    bool is_has_protected_content_Valid() const;

    bool isHasVisibleHistory() const;
    void setHasVisibleHistory(const bool &has_visible_history);
    bool is_has_visible_history_Set() const;
    bool is_has_visible_history_Valid() const;

    QString getStickerSetName() const;
    void setStickerSetName(const QString &sticker_set_name);
    bool is_sticker_set_name_Set() const;
    bool is_sticker_set_name_Valid() const;

    bool isCanSetStickerSet() const;
    void setCanSetStickerSet(const bool &can_set_sticker_set);
    bool is_can_set_sticker_set_Set() const;
    bool is_can_set_sticker_set_Valid() const;

    QString getCustomEmojiStickerSetName() const;
    void setCustomEmojiStickerSetName(const QString &custom_emoji_sticker_set_name);
    bool is_custom_emoji_sticker_set_name_Set() const;
    bool is_custom_emoji_sticker_set_name_Valid() const;

    qint32 getLinkedChatId() const;
    void setLinkedChatId(const qint32 &linked_chat_id);
    bool is_linked_chat_id_Set() const;
    bool is_linked_chat_id_Valid() const;

    OAIChatLocation getLocation() const;
    void setLocation(const OAIChatLocation &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_accent_color_id;
    bool m_accent_color_id_isSet;
    bool m_accent_color_id_isValid;

    qint32 m_max_reaction_count;
    bool m_max_reaction_count_isSet;
    bool m_max_reaction_count_isValid;

    OAIAcceptedGiftTypes m_accepted_gift_types;
    bool m_accepted_gift_types_isSet;
    bool m_accepted_gift_types_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_username;
    bool m_username_isSet;
    bool m_username_isValid;

    QString m_first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;

    QString m_last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;

    bool m_is_forum;
    bool m_is_forum_isSet;
    bool m_is_forum_isValid;

    OAIChatPhoto m_photo;
    bool m_photo_isSet;
    bool m_photo_isValid;

    QList<QString> m_active_usernames;
    bool m_active_usernames_isSet;
    bool m_active_usernames_isValid;

    OAIBirthdate m_birthdate;
    bool m_birthdate_isSet;
    bool m_birthdate_isValid;

    OAIBusinessIntro m_business_intro;
    bool m_business_intro_isSet;
    bool m_business_intro_isValid;

    OAIBusinessLocation m_business_location;
    bool m_business_location_isSet;
    bool m_business_location_isValid;

    OAIBusinessOpeningHours m_business_opening_hours;
    bool m_business_opening_hours_isSet;
    bool m_business_opening_hours_isValid;

    OAIChat m_personal_chat;
    bool m_personal_chat_isSet;
    bool m_personal_chat_isValid;

    QList<OAIReactionType> m_available_reactions;
    bool m_available_reactions_isSet;
    bool m_available_reactions_isValid;

    QString m_background_custom_emoji_id;
    bool m_background_custom_emoji_id_isSet;
    bool m_background_custom_emoji_id_isValid;

    qint32 m_profile_accent_color_id;
    bool m_profile_accent_color_id_isSet;
    bool m_profile_accent_color_id_isValid;

    QString m_profile_background_custom_emoji_id;
    bool m_profile_background_custom_emoji_id_isSet;
    bool m_profile_background_custom_emoji_id_isValid;

    QString m_emoji_status_custom_emoji_id;
    bool m_emoji_status_custom_emoji_id_isSet;
    bool m_emoji_status_custom_emoji_id_isValid;

    qint32 m_emoji_status_expiration_date;
    bool m_emoji_status_expiration_date_isSet;
    bool m_emoji_status_expiration_date_isValid;

    QString m_bio;
    bool m_bio_isSet;
    bool m_bio_isValid;

    bool m_has_private_forwards;
    bool m_has_private_forwards_isSet;
    bool m_has_private_forwards_isValid;

    bool m_has_restricted_voice_and_video_messages;
    bool m_has_restricted_voice_and_video_messages_isSet;
    bool m_has_restricted_voice_and_video_messages_isValid;

    bool m_join_to_send_messages;
    bool m_join_to_send_messages_isSet;
    bool m_join_to_send_messages_isValid;

    bool m_join_by_request;
    bool m_join_by_request_isSet;
    bool m_join_by_request_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_invite_link;
    bool m_invite_link_isSet;
    bool m_invite_link_isValid;

    OAIMessage m_pinned_message;
    bool m_pinned_message_isSet;
    bool m_pinned_message_isValid;

    OAIChatPermissions m_permissions;
    bool m_permissions_isSet;
    bool m_permissions_isValid;

    bool m_can_send_paid_media;
    bool m_can_send_paid_media_isSet;
    bool m_can_send_paid_media_isValid;

    qint32 m_slow_mode_delay;
    bool m_slow_mode_delay_isSet;
    bool m_slow_mode_delay_isValid;

    qint32 m_unrestrict_boost_count;
    bool m_unrestrict_boost_count_isSet;
    bool m_unrestrict_boost_count_isValid;

    qint32 m_message_auto_delete_time;
    bool m_message_auto_delete_time_isSet;
    bool m_message_auto_delete_time_isValid;

    bool m_has_aggressive_anti_spam_enabled;
    bool m_has_aggressive_anti_spam_enabled_isSet;
    bool m_has_aggressive_anti_spam_enabled_isValid;

    bool m_has_hidden_members;
    bool m_has_hidden_members_isSet;
    bool m_has_hidden_members_isValid;

    bool m_has_protected_content;
    bool m_has_protected_content_isSet;
    bool m_has_protected_content_isValid;

    bool m_has_visible_history;
    bool m_has_visible_history_isSet;
    bool m_has_visible_history_isValid;

    QString m_sticker_set_name;
    bool m_sticker_set_name_isSet;
    bool m_sticker_set_name_isValid;

    bool m_can_set_sticker_set;
    bool m_can_set_sticker_set_isSet;
    bool m_can_set_sticker_set_isValid;

    QString m_custom_emoji_sticker_set_name;
    bool m_custom_emoji_sticker_set_name_isSet;
    bool m_custom_emoji_sticker_set_name_isValid;

    qint32 m_linked_chat_id;
    bool m_linked_chat_id_isSet;
    bool m_linked_chat_id_isValid;

    OAIChatLocation m_location;
    bool m_location_isSet;
    bool m_location_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIChatFullInfo)

#endif // OAIChatFullInfo_H
