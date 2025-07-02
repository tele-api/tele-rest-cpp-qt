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
 * OAIMessage.h
 *
 * This object represents a message.
 */

#ifndef OAIMessage_H
#define OAIMessage_H

#include <QJsonObject>

#include "OAIAnimation.h"
#include "OAIAudio.h"
#include "OAIChat.h"
#include "OAIChatBackground.h"
#include "OAIChatBoostAdded.h"
#include "OAIChatShared.h"
#include "OAIContact.h"
#include "OAIDice.h"
#include "OAIDocument.h"
#include "OAIExternalReplyInfo.h"
#include "OAIForumTopicCreated.h"
#include "OAIForumTopicEdited.h"
#include "OAIGame.h"
#include "OAIGiftInfo.h"
#include "OAIGiveaway.h"
#include "OAIGiveawayCompleted.h"
#include "OAIGiveawayCreated.h"
#include "OAIGiveawayWinners.h"
#include "OAIInlineKeyboardMarkup.h"
#include "OAIInvoice.h"
#include "OAILinkPreviewOptions.h"
#include "OAILocation.h"
#include "OAIMaybeInaccessibleMessage.h"
#include "OAIMessageAutoDeleteTimerChanged.h"
#include "OAIMessageEntity.h"
#include "OAIMessageOrigin.h"
#include "OAIPaidMediaInfo.h"
#include "OAIPaidMessagePriceChanged.h"
#include "OAIPassportData.h"
#include "OAIPhotoSize.h"
#include "OAIPoll.h"
#include "OAIProximityAlertTriggered.h"
#include "OAIRefundedPayment.h"
#include "OAISticker.h"
#include "OAIStory.h"
#include "OAISuccessfulPayment.h"
#include "OAITextQuote.h"
#include "OAIUniqueGiftInfo.h"
#include "OAIUser.h"
#include "OAIUsersShared.h"
#include "OAIVenue.h"
#include "OAIVideo.h"
#include "OAIVideoChatEnded.h"
#include "OAIVideoChatParticipantsInvited.h"
#include "OAIVideoChatScheduled.h"
#include "OAIVideoNote.h"
#include "OAIVoice.h"
#include "OAIWebAppData.h"
#include "OAIWriteAccessAllowed.h"
#include <QJsonValue>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIChat;
class OAIUser;
class OAIMessageOrigin;
class OAIExternalReplyInfo;
class OAITextQuote;
class OAIStory;
class OAIMessageEntity;
class OAILinkPreviewOptions;
class OAIAnimation;
class OAIAudio;
class OAIDocument;
class OAIPaidMediaInfo;
class OAIPhotoSize;
class OAISticker;
class OAIVideo;
class OAIVideoNote;
class OAIVoice;
class OAIContact;
class OAIDice;
class OAIGame;
class OAIPoll;
class OAIVenue;
class OAILocation;
class OAIMessageAutoDeleteTimerChanged;
class OAIMaybeInaccessibleMessage;
class OAIInvoice;
class OAISuccessfulPayment;
class OAIRefundedPayment;
class OAIUsersShared;
class OAIChatShared;
class OAIGiftInfo;
class OAIUniqueGiftInfo;
class OAIWriteAccessAllowed;
class OAIPassportData;
class OAIProximityAlertTriggered;
class OAIChatBoostAdded;
class OAIChatBackground;
class OAIForumTopicCreated;
class OAIForumTopicEdited;
class OAIGiveawayCreated;
class OAIGiveaway;
class OAIGiveawayWinners;
class OAIGiveawayCompleted;
class OAIPaidMessagePriceChanged;
class OAIVideoChatScheduled;
class OAIVideoChatEnded;
class OAIVideoChatParticipantsInvited;
class OAIWebAppData;
class OAIInlineKeyboardMarkup;

class OAIMessage : public OAIObject {
public:
    OAIMessage();
    OAIMessage(QString json);
    ~OAIMessage() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getMessageId() const;
    void setMessageId(const qint32 &message_id);
    bool is_message_id_Set() const;
    bool is_message_id_Valid() const;

    qint32 getDate() const;
    void setDate(const qint32 &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    qint32 getMessageThreadId() const;
    void setMessageThreadId(const qint32 &message_thread_id);
    bool is_message_thread_id_Set() const;
    bool is_message_thread_id_Valid() const;

    OAIUser getFrom() const;
    void setFrom(const OAIUser &from);
    bool is_from_Set() const;
    bool is_from_Valid() const;

    OAIChat getSenderChat() const;
    void setSenderChat(const OAIChat &sender_chat);
    bool is_sender_chat_Set() const;
    bool is_sender_chat_Valid() const;

    qint32 getSenderBoostCount() const;
    void setSenderBoostCount(const qint32 &sender_boost_count);
    bool is_sender_boost_count_Set() const;
    bool is_sender_boost_count_Valid() const;

    OAIUser getSenderBusinessBot() const;
    void setSenderBusinessBot(const OAIUser &sender_business_bot);
    bool is_sender_business_bot_Set() const;
    bool is_sender_business_bot_Valid() const;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    OAIMessageOrigin getForwardOrigin() const;
    void setForwardOrigin(const OAIMessageOrigin &forward_origin);
    bool is_forward_origin_Set() const;
    bool is_forward_origin_Valid() const;

    bool isIsTopicMessage() const;
    void setIsTopicMessage(const bool &is_topic_message);
    bool is_is_topic_message_Set() const;
    bool is_is_topic_message_Valid() const;

    bool isIsAutomaticForward() const;
    void setIsAutomaticForward(const bool &is_automatic_forward);
    bool is_is_automatic_forward_Set() const;
    bool is_is_automatic_forward_Valid() const;

    OAIMessage getReplyToMessage() const;
    void setReplyToMessage(const OAIMessage &reply_to_message);
    bool is_reply_to_message_Set() const;
    bool is_reply_to_message_Valid() const;

    OAIExternalReplyInfo getExternalReply() const;
    void setExternalReply(const OAIExternalReplyInfo &external_reply);
    bool is_external_reply_Set() const;
    bool is_external_reply_Valid() const;

    OAITextQuote getQuote() const;
    void setQuote(const OAITextQuote &quote);
    bool is_quote_Set() const;
    bool is_quote_Valid() const;

    OAIStory getReplyToStory() const;
    void setReplyToStory(const OAIStory &reply_to_story);
    bool is_reply_to_story_Set() const;
    bool is_reply_to_story_Valid() const;

    OAIUser getViaBot() const;
    void setViaBot(const OAIUser &via_bot);
    bool is_via_bot_Set() const;
    bool is_via_bot_Valid() const;

    qint32 getEditDate() const;
    void setEditDate(const qint32 &edit_date);
    bool is_edit_date_Set() const;
    bool is_edit_date_Valid() const;

    bool isHasProtectedContent() const;
    void setHasProtectedContent(const bool &has_protected_content);
    bool is_has_protected_content_Set() const;
    bool is_has_protected_content_Valid() const;

    bool isIsFromOffline() const;
    void setIsFromOffline(const bool &is_from_offline);
    bool is_is_from_offline_Set() const;
    bool is_is_from_offline_Valid() const;

    QString getMediaGroupId() const;
    void setMediaGroupId(const QString &media_group_id);
    bool is_media_group_id_Set() const;
    bool is_media_group_id_Valid() const;

    QString getAuthorSignature() const;
    void setAuthorSignature(const QString &author_signature);
    bool is_author_signature_Set() const;
    bool is_author_signature_Valid() const;

    qint32 getPaidStarCount() const;
    void setPaidStarCount(const qint32 &paid_star_count);
    bool is_paid_star_count_Set() const;
    bool is_paid_star_count_Valid() const;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QList<OAIMessageEntity> getEntities() const;
    void setEntities(const QList<OAIMessageEntity> &entities);
    bool is_entities_Set() const;
    bool is_entities_Valid() const;

    OAILinkPreviewOptions getLinkPreviewOptions() const;
    void setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options);
    bool is_link_preview_options_Set() const;
    bool is_link_preview_options_Valid() const;

    QString getEffectId() const;
    void setEffectId(const QString &effect_id);
    bool is_effect_id_Set() const;
    bool is_effect_id_Valid() const;

    OAIAnimation getAnimation() const;
    void setAnimation(const OAIAnimation &animation);
    bool is_animation_Set() const;
    bool is_animation_Valid() const;

    OAIAudio getAudio() const;
    void setAudio(const OAIAudio &audio);
    bool is_audio_Set() const;
    bool is_audio_Valid() const;

    OAIDocument getDocument() const;
    void setDocument(const OAIDocument &document);
    bool is_document_Set() const;
    bool is_document_Valid() const;

    OAIPaidMediaInfo getPaidMedia() const;
    void setPaidMedia(const OAIPaidMediaInfo &paid_media);
    bool is_paid_media_Set() const;
    bool is_paid_media_Valid() const;

    QList<OAIPhotoSize> getPhoto() const;
    void setPhoto(const QList<OAIPhotoSize> &photo);
    bool is_photo_Set() const;
    bool is_photo_Valid() const;

    OAISticker getSticker() const;
    void setSticker(const OAISticker &sticker);
    bool is_sticker_Set() const;
    bool is_sticker_Valid() const;

    OAIStory getStory() const;
    void setStory(const OAIStory &story);
    bool is_story_Set() const;
    bool is_story_Valid() const;

    OAIVideo getVideo() const;
    void setVideo(const OAIVideo &video);
    bool is_video_Set() const;
    bool is_video_Valid() const;

    OAIVideoNote getVideoNote() const;
    void setVideoNote(const OAIVideoNote &video_note);
    bool is_video_note_Set() const;
    bool is_video_note_Valid() const;

    OAIVoice getVoice() const;
    void setVoice(const OAIVoice &voice);
    bool is_voice_Set() const;
    bool is_voice_Valid() const;

    QString getCaption() const;
    void setCaption(const QString &caption);
    bool is_caption_Set() const;
    bool is_caption_Valid() const;

    QList<OAIMessageEntity> getCaptionEntities() const;
    void setCaptionEntities(const QList<OAIMessageEntity> &caption_entities);
    bool is_caption_entities_Set() const;
    bool is_caption_entities_Valid() const;

    bool isShowCaptionAboveMedia() const;
    void setShowCaptionAboveMedia(const bool &show_caption_above_media);
    bool is_show_caption_above_media_Set() const;
    bool is_show_caption_above_media_Valid() const;

    bool isHasMediaSpoiler() const;
    void setHasMediaSpoiler(const bool &has_media_spoiler);
    bool is_has_media_spoiler_Set() const;
    bool is_has_media_spoiler_Valid() const;

    OAIContact getContact() const;
    void setContact(const OAIContact &contact);
    bool is_contact_Set() const;
    bool is_contact_Valid() const;

    OAIDice getDice() const;
    void setDice(const OAIDice &dice);
    bool is_dice_Set() const;
    bool is_dice_Valid() const;

    OAIGame getGame() const;
    void setGame(const OAIGame &game);
    bool is_game_Set() const;
    bool is_game_Valid() const;

    OAIPoll getPoll() const;
    void setPoll(const OAIPoll &poll);
    bool is_poll_Set() const;
    bool is_poll_Valid() const;

    OAIVenue getVenue() const;
    void setVenue(const OAIVenue &venue);
    bool is_venue_Set() const;
    bool is_venue_Valid() const;

    OAILocation getLocation() const;
    void setLocation(const OAILocation &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    QList<OAIUser> getNewChatMembers() const;
    void setNewChatMembers(const QList<OAIUser> &new_chat_members);
    bool is_new_chat_members_Set() const;
    bool is_new_chat_members_Valid() const;

    OAIUser getLeftChatMember() const;
    void setLeftChatMember(const OAIUser &left_chat_member);
    bool is_left_chat_member_Set() const;
    bool is_left_chat_member_Valid() const;

    QString getNewChatTitle() const;
    void setNewChatTitle(const QString &new_chat_title);
    bool is_new_chat_title_Set() const;
    bool is_new_chat_title_Valid() const;

    QList<OAIPhotoSize> getNewChatPhoto() const;
    void setNewChatPhoto(const QList<OAIPhotoSize> &new_chat_photo);
    bool is_new_chat_photo_Set() const;
    bool is_new_chat_photo_Valid() const;

    bool isDeleteChatPhoto() const;
    void setDeleteChatPhoto(const bool &delete_chat_photo);
    bool is_delete_chat_photo_Set() const;
    bool is_delete_chat_photo_Valid() const;

    bool isGroupChatCreated() const;
    void setGroupChatCreated(const bool &group_chat_created);
    bool is_group_chat_created_Set() const;
    bool is_group_chat_created_Valid() const;

    bool isSupergroupChatCreated() const;
    void setSupergroupChatCreated(const bool &supergroup_chat_created);
    bool is_supergroup_chat_created_Set() const;
    bool is_supergroup_chat_created_Valid() const;

    bool isChannelChatCreated() const;
    void setChannelChatCreated(const bool &channel_chat_created);
    bool is_channel_chat_created_Set() const;
    bool is_channel_chat_created_Valid() const;

    OAIMessageAutoDeleteTimerChanged getMessageAutoDeleteTimerChanged() const;
    void setMessageAutoDeleteTimerChanged(const OAIMessageAutoDeleteTimerChanged &message_auto_delete_timer_changed);
    bool is_message_auto_delete_timer_changed_Set() const;
    bool is_message_auto_delete_timer_changed_Valid() const;

    qint32 getMigrateToChatId() const;
    void setMigrateToChatId(const qint32 &migrate_to_chat_id);
    bool is_migrate_to_chat_id_Set() const;
    bool is_migrate_to_chat_id_Valid() const;

    qint32 getMigrateFromChatId() const;
    void setMigrateFromChatId(const qint32 &migrate_from_chat_id);
    bool is_migrate_from_chat_id_Set() const;
    bool is_migrate_from_chat_id_Valid() const;

    OAIMaybeInaccessibleMessage getPinnedMessage() const;
    void setPinnedMessage(const OAIMaybeInaccessibleMessage &pinned_message);
    bool is_pinned_message_Set() const;
    bool is_pinned_message_Valid() const;

    OAIInvoice getInvoice() const;
    void setInvoice(const OAIInvoice &invoice);
    bool is_invoice_Set() const;
    bool is_invoice_Valid() const;

    OAISuccessfulPayment getSuccessfulPayment() const;
    void setSuccessfulPayment(const OAISuccessfulPayment &successful_payment);
    bool is_successful_payment_Set() const;
    bool is_successful_payment_Valid() const;

    OAIRefundedPayment getRefundedPayment() const;
    void setRefundedPayment(const OAIRefundedPayment &refunded_payment);
    bool is_refunded_payment_Set() const;
    bool is_refunded_payment_Valid() const;

    OAIUsersShared getUsersShared() const;
    void setUsersShared(const OAIUsersShared &users_shared);
    bool is_users_shared_Set() const;
    bool is_users_shared_Valid() const;

    OAIChatShared getChatShared() const;
    void setChatShared(const OAIChatShared &chat_shared);
    bool is_chat_shared_Set() const;
    bool is_chat_shared_Valid() const;

    OAIGiftInfo getGift() const;
    void setGift(const OAIGiftInfo &gift);
    bool is_gift_Set() const;
    bool is_gift_Valid() const;

    OAIUniqueGiftInfo getUniqueGift() const;
    void setUniqueGift(const OAIUniqueGiftInfo &unique_gift);
    bool is_unique_gift_Set() const;
    bool is_unique_gift_Valid() const;

    QString getConnectedWebsite() const;
    void setConnectedWebsite(const QString &connected_website);
    bool is_connected_website_Set() const;
    bool is_connected_website_Valid() const;

    OAIWriteAccessAllowed getWriteAccessAllowed() const;
    void setWriteAccessAllowed(const OAIWriteAccessAllowed &write_access_allowed);
    bool is_write_access_allowed_Set() const;
    bool is_write_access_allowed_Valid() const;

    OAIPassportData getPassportData() const;
    void setPassportData(const OAIPassportData &passport_data);
    bool is_passport_data_Set() const;
    bool is_passport_data_Valid() const;

    OAIProximityAlertTriggered getProximityAlertTriggered() const;
    void setProximityAlertTriggered(const OAIProximityAlertTriggered &proximity_alert_triggered);
    bool is_proximity_alert_triggered_Set() const;
    bool is_proximity_alert_triggered_Valid() const;

    OAIChatBoostAdded getBoostAdded() const;
    void setBoostAdded(const OAIChatBoostAdded &boost_added);
    bool is_boost_added_Set() const;
    bool is_boost_added_Valid() const;

    OAIChatBackground getChatBackgroundSet() const;
    void setChatBackgroundSet(const OAIChatBackground &chat_background_set);
    bool is_chat_background_set_Set() const;
    bool is_chat_background_set_Valid() const;

    OAIForumTopicCreated getForumTopicCreated() const;
    void setForumTopicCreated(const OAIForumTopicCreated &forum_topic_created);
    bool is_forum_topic_created_Set() const;
    bool is_forum_topic_created_Valid() const;

    OAIForumTopicEdited getForumTopicEdited() const;
    void setForumTopicEdited(const OAIForumTopicEdited &forum_topic_edited);
    bool is_forum_topic_edited_Set() const;
    bool is_forum_topic_edited_Valid() const;

    QJsonValue getForumTopicClosed() const;
    void setForumTopicClosed(const QJsonValue &forum_topic_closed);
    bool is_forum_topic_closed_Set() const;
    bool is_forum_topic_closed_Valid() const;

    QJsonValue getForumTopicReopened() const;
    void setForumTopicReopened(const QJsonValue &forum_topic_reopened);
    bool is_forum_topic_reopened_Set() const;
    bool is_forum_topic_reopened_Valid() const;

    QJsonValue getGeneralForumTopicHidden() const;
    void setGeneralForumTopicHidden(const QJsonValue &general_forum_topic_hidden);
    bool is_general_forum_topic_hidden_Set() const;
    bool is_general_forum_topic_hidden_Valid() const;

    QJsonValue getGeneralForumTopicUnhidden() const;
    void setGeneralForumTopicUnhidden(const QJsonValue &general_forum_topic_unhidden);
    bool is_general_forum_topic_unhidden_Set() const;
    bool is_general_forum_topic_unhidden_Valid() const;

    OAIGiveawayCreated getGiveawayCreated() const;
    void setGiveawayCreated(const OAIGiveawayCreated &giveaway_created);
    bool is_giveaway_created_Set() const;
    bool is_giveaway_created_Valid() const;

    OAIGiveaway getGiveaway() const;
    void setGiveaway(const OAIGiveaway &giveaway);
    bool is_giveaway_Set() const;
    bool is_giveaway_Valid() const;

    OAIGiveawayWinners getGiveawayWinners() const;
    void setGiveawayWinners(const OAIGiveawayWinners &giveaway_winners);
    bool is_giveaway_winners_Set() const;
    bool is_giveaway_winners_Valid() const;

    OAIGiveawayCompleted getGiveawayCompleted() const;
    void setGiveawayCompleted(const OAIGiveawayCompleted &giveaway_completed);
    bool is_giveaway_completed_Set() const;
    bool is_giveaway_completed_Valid() const;

    OAIPaidMessagePriceChanged getPaidMessagePriceChanged() const;
    void setPaidMessagePriceChanged(const OAIPaidMessagePriceChanged &paid_message_price_changed);
    bool is_paid_message_price_changed_Set() const;
    bool is_paid_message_price_changed_Valid() const;

    OAIVideoChatScheduled getVideoChatScheduled() const;
    void setVideoChatScheduled(const OAIVideoChatScheduled &video_chat_scheduled);
    bool is_video_chat_scheduled_Set() const;
    bool is_video_chat_scheduled_Valid() const;

    QJsonValue getVideoChatStarted() const;
    void setVideoChatStarted(const QJsonValue &video_chat_started);
    bool is_video_chat_started_Set() const;
    bool is_video_chat_started_Valid() const;

    OAIVideoChatEnded getVideoChatEnded() const;
    void setVideoChatEnded(const OAIVideoChatEnded &video_chat_ended);
    bool is_video_chat_ended_Set() const;
    bool is_video_chat_ended_Valid() const;

    OAIVideoChatParticipantsInvited getVideoChatParticipantsInvited() const;
    void setVideoChatParticipantsInvited(const OAIVideoChatParticipantsInvited &video_chat_participants_invited);
    bool is_video_chat_participants_invited_Set() const;
    bool is_video_chat_participants_invited_Valid() const;

    OAIWebAppData getWebAppData() const;
    void setWebAppData(const OAIWebAppData &web_app_data);
    bool is_web_app_data_Set() const;
    bool is_web_app_data_Valid() const;

    OAIInlineKeyboardMarkup getReplyMarkup() const;
    void setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_message_id;
    bool m_message_id_isSet;
    bool m_message_id_isValid;

    qint32 m_date;
    bool m_date_isSet;
    bool m_date_isValid;

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    qint32 m_message_thread_id;
    bool m_message_thread_id_isSet;
    bool m_message_thread_id_isValid;

    OAIUser m_from;
    bool m_from_isSet;
    bool m_from_isValid;

    OAIChat m_sender_chat;
    bool m_sender_chat_isSet;
    bool m_sender_chat_isValid;

    qint32 m_sender_boost_count;
    bool m_sender_boost_count_isSet;
    bool m_sender_boost_count_isValid;

    OAIUser m_sender_business_bot;
    bool m_sender_business_bot_isSet;
    bool m_sender_business_bot_isValid;

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    OAIMessageOrigin m_forward_origin;
    bool m_forward_origin_isSet;
    bool m_forward_origin_isValid;

    bool m_is_topic_message;
    bool m_is_topic_message_isSet;
    bool m_is_topic_message_isValid;

    bool m_is_automatic_forward;
    bool m_is_automatic_forward_isSet;
    bool m_is_automatic_forward_isValid;

    OAIMessage m_reply_to_message;
    bool m_reply_to_message_isSet;
    bool m_reply_to_message_isValid;

    OAIExternalReplyInfo m_external_reply;
    bool m_external_reply_isSet;
    bool m_external_reply_isValid;

    OAITextQuote m_quote;
    bool m_quote_isSet;
    bool m_quote_isValid;

    OAIStory m_reply_to_story;
    bool m_reply_to_story_isSet;
    bool m_reply_to_story_isValid;

    OAIUser m_via_bot;
    bool m_via_bot_isSet;
    bool m_via_bot_isValid;

    qint32 m_edit_date;
    bool m_edit_date_isSet;
    bool m_edit_date_isValid;

    bool m_has_protected_content;
    bool m_has_protected_content_isSet;
    bool m_has_protected_content_isValid;

    bool m_is_from_offline;
    bool m_is_from_offline_isSet;
    bool m_is_from_offline_isValid;

    QString m_media_group_id;
    bool m_media_group_id_isSet;
    bool m_media_group_id_isValid;

    QString m_author_signature;
    bool m_author_signature_isSet;
    bool m_author_signature_isValid;

    qint32 m_paid_star_count;
    bool m_paid_star_count_isSet;
    bool m_paid_star_count_isValid;

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QList<OAIMessageEntity> m_entities;
    bool m_entities_isSet;
    bool m_entities_isValid;

    OAILinkPreviewOptions m_link_preview_options;
    bool m_link_preview_options_isSet;
    bool m_link_preview_options_isValid;

    QString m_effect_id;
    bool m_effect_id_isSet;
    bool m_effect_id_isValid;

    OAIAnimation m_animation;
    bool m_animation_isSet;
    bool m_animation_isValid;

    OAIAudio m_audio;
    bool m_audio_isSet;
    bool m_audio_isValid;

    OAIDocument m_document;
    bool m_document_isSet;
    bool m_document_isValid;

    OAIPaidMediaInfo m_paid_media;
    bool m_paid_media_isSet;
    bool m_paid_media_isValid;

    QList<OAIPhotoSize> m_photo;
    bool m_photo_isSet;
    bool m_photo_isValid;

    OAISticker m_sticker;
    bool m_sticker_isSet;
    bool m_sticker_isValid;

    OAIStory m_story;
    bool m_story_isSet;
    bool m_story_isValid;

    OAIVideo m_video;
    bool m_video_isSet;
    bool m_video_isValid;

    OAIVideoNote m_video_note;
    bool m_video_note_isSet;
    bool m_video_note_isValid;

    OAIVoice m_voice;
    bool m_voice_isSet;
    bool m_voice_isValid;

    QString m_caption;
    bool m_caption_isSet;
    bool m_caption_isValid;

    QList<OAIMessageEntity> m_caption_entities;
    bool m_caption_entities_isSet;
    bool m_caption_entities_isValid;

    bool m_show_caption_above_media;
    bool m_show_caption_above_media_isSet;
    bool m_show_caption_above_media_isValid;

    bool m_has_media_spoiler;
    bool m_has_media_spoiler_isSet;
    bool m_has_media_spoiler_isValid;

    OAIContact m_contact;
    bool m_contact_isSet;
    bool m_contact_isValid;

    OAIDice m_dice;
    bool m_dice_isSet;
    bool m_dice_isValid;

    OAIGame m_game;
    bool m_game_isSet;
    bool m_game_isValid;

    OAIPoll m_poll;
    bool m_poll_isSet;
    bool m_poll_isValid;

    OAIVenue m_venue;
    bool m_venue_isSet;
    bool m_venue_isValid;

    OAILocation m_location;
    bool m_location_isSet;
    bool m_location_isValid;

    QList<OAIUser> m_new_chat_members;
    bool m_new_chat_members_isSet;
    bool m_new_chat_members_isValid;

    OAIUser m_left_chat_member;
    bool m_left_chat_member_isSet;
    bool m_left_chat_member_isValid;

    QString m_new_chat_title;
    bool m_new_chat_title_isSet;
    bool m_new_chat_title_isValid;

    QList<OAIPhotoSize> m_new_chat_photo;
    bool m_new_chat_photo_isSet;
    bool m_new_chat_photo_isValid;

    bool m_delete_chat_photo;
    bool m_delete_chat_photo_isSet;
    bool m_delete_chat_photo_isValid;

    bool m_group_chat_created;
    bool m_group_chat_created_isSet;
    bool m_group_chat_created_isValid;

    bool m_supergroup_chat_created;
    bool m_supergroup_chat_created_isSet;
    bool m_supergroup_chat_created_isValid;

    bool m_channel_chat_created;
    bool m_channel_chat_created_isSet;
    bool m_channel_chat_created_isValid;

    OAIMessageAutoDeleteTimerChanged m_message_auto_delete_timer_changed;
    bool m_message_auto_delete_timer_changed_isSet;
    bool m_message_auto_delete_timer_changed_isValid;

    qint32 m_migrate_to_chat_id;
    bool m_migrate_to_chat_id_isSet;
    bool m_migrate_to_chat_id_isValid;

    qint32 m_migrate_from_chat_id;
    bool m_migrate_from_chat_id_isSet;
    bool m_migrate_from_chat_id_isValid;

    OAIMaybeInaccessibleMessage m_pinned_message;
    bool m_pinned_message_isSet;
    bool m_pinned_message_isValid;

    OAIInvoice m_invoice;
    bool m_invoice_isSet;
    bool m_invoice_isValid;

    OAISuccessfulPayment m_successful_payment;
    bool m_successful_payment_isSet;
    bool m_successful_payment_isValid;

    OAIRefundedPayment m_refunded_payment;
    bool m_refunded_payment_isSet;
    bool m_refunded_payment_isValid;

    OAIUsersShared m_users_shared;
    bool m_users_shared_isSet;
    bool m_users_shared_isValid;

    OAIChatShared m_chat_shared;
    bool m_chat_shared_isSet;
    bool m_chat_shared_isValid;

    OAIGiftInfo m_gift;
    bool m_gift_isSet;
    bool m_gift_isValid;

    OAIUniqueGiftInfo m_unique_gift;
    bool m_unique_gift_isSet;
    bool m_unique_gift_isValid;

    QString m_connected_website;
    bool m_connected_website_isSet;
    bool m_connected_website_isValid;

    OAIWriteAccessAllowed m_write_access_allowed;
    bool m_write_access_allowed_isSet;
    bool m_write_access_allowed_isValid;

    OAIPassportData m_passport_data;
    bool m_passport_data_isSet;
    bool m_passport_data_isValid;

    OAIProximityAlertTriggered m_proximity_alert_triggered;
    bool m_proximity_alert_triggered_isSet;
    bool m_proximity_alert_triggered_isValid;

    OAIChatBoostAdded m_boost_added;
    bool m_boost_added_isSet;
    bool m_boost_added_isValid;

    OAIChatBackground m_chat_background_set;
    bool m_chat_background_set_isSet;
    bool m_chat_background_set_isValid;

    OAIForumTopicCreated m_forum_topic_created;
    bool m_forum_topic_created_isSet;
    bool m_forum_topic_created_isValid;

    OAIForumTopicEdited m_forum_topic_edited;
    bool m_forum_topic_edited_isSet;
    bool m_forum_topic_edited_isValid;

    QJsonValue m_forum_topic_closed;
    bool m_forum_topic_closed_isSet;
    bool m_forum_topic_closed_isValid;

    QJsonValue m_forum_topic_reopened;
    bool m_forum_topic_reopened_isSet;
    bool m_forum_topic_reopened_isValid;

    QJsonValue m_general_forum_topic_hidden;
    bool m_general_forum_topic_hidden_isSet;
    bool m_general_forum_topic_hidden_isValid;

    QJsonValue m_general_forum_topic_unhidden;
    bool m_general_forum_topic_unhidden_isSet;
    bool m_general_forum_topic_unhidden_isValid;

    OAIGiveawayCreated m_giveaway_created;
    bool m_giveaway_created_isSet;
    bool m_giveaway_created_isValid;

    OAIGiveaway m_giveaway;
    bool m_giveaway_isSet;
    bool m_giveaway_isValid;

    OAIGiveawayWinners m_giveaway_winners;
    bool m_giveaway_winners_isSet;
    bool m_giveaway_winners_isValid;

    OAIGiveawayCompleted m_giveaway_completed;
    bool m_giveaway_completed_isSet;
    bool m_giveaway_completed_isValid;

    OAIPaidMessagePriceChanged m_paid_message_price_changed;
    bool m_paid_message_price_changed_isSet;
    bool m_paid_message_price_changed_isValid;

    OAIVideoChatScheduled m_video_chat_scheduled;
    bool m_video_chat_scheduled_isSet;
    bool m_video_chat_scheduled_isValid;

    QJsonValue m_video_chat_started;
    bool m_video_chat_started_isSet;
    bool m_video_chat_started_isValid;

    OAIVideoChatEnded m_video_chat_ended;
    bool m_video_chat_ended_isSet;
    bool m_video_chat_ended_isValid;

    OAIVideoChatParticipantsInvited m_video_chat_participants_invited;
    bool m_video_chat_participants_invited_isSet;
    bool m_video_chat_participants_invited_isValid;

    OAIWebAppData m_web_app_data;
    bool m_web_app_data_isSet;
    bool m_web_app_data_isValid;

    OAIInlineKeyboardMarkup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIMessage)

#endif // OAIMessage_H
