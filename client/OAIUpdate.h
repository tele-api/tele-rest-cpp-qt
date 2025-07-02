/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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
 * OAIUpdate.h
 *
 * This [object](https://core.telegram.org/bots/api/#available-types) represents an incoming update.   At most **one** of the optional parameters can be present in any given update.
 */

#ifndef OAIUpdate_H
#define OAIUpdate_H

#include <QJsonObject>

#include "OAIBusinessConnection.h"
#include "OAIBusinessMessagesDeleted.h"
#include "OAICallbackQuery.h"
#include "OAIChatBoostRemoved.h"
#include "OAIChatBoostUpdated.h"
#include "OAIChatJoinRequest.h"
#include "OAIChatMemberUpdated.h"
#include "OAIChosenInlineResult.h"
#include "OAIInlineQuery.h"
#include "OAIMessage.h"
#include "OAIMessageReactionCountUpdated.h"
#include "OAIMessageReactionUpdated.h"
#include "OAIPaidMediaPurchased.h"
#include "OAIPoll.h"
#include "OAIPollAnswer.h"
#include "OAIPreCheckoutQuery.h"
#include "OAIShippingQuery.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIMessage;
class OAIBusinessConnection;
class OAIBusinessMessagesDeleted;
class OAIMessageReactionUpdated;
class OAIMessageReactionCountUpdated;
class OAIInlineQuery;
class OAIChosenInlineResult;
class OAICallbackQuery;
class OAIShippingQuery;
class OAIPreCheckoutQuery;
class OAIPaidMediaPurchased;
class OAIPoll;
class OAIPollAnswer;
class OAIChatMemberUpdated;
class OAIChatJoinRequest;
class OAIChatBoostUpdated;
class OAIChatBoostRemoved;

class OAIUpdate : public OAIObject {
public:
    OAIUpdate();
    OAIUpdate(QString json);
    ~OAIUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getUpdateId() const;
    void setUpdateId(const qint32 &update_id);
    bool is_update_id_Set() const;
    bool is_update_id_Valid() const;

    OAIMessage getMessage() const;
    void setMessage(const OAIMessage &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    OAIMessage getEditedMessage() const;
    void setEditedMessage(const OAIMessage &edited_message);
    bool is_edited_message_Set() const;
    bool is_edited_message_Valid() const;

    OAIMessage getChannelPost() const;
    void setChannelPost(const OAIMessage &channel_post);
    bool is_channel_post_Set() const;
    bool is_channel_post_Valid() const;

    OAIMessage getEditedChannelPost() const;
    void setEditedChannelPost(const OAIMessage &edited_channel_post);
    bool is_edited_channel_post_Set() const;
    bool is_edited_channel_post_Valid() const;

    OAIBusinessConnection getBusinessConnection() const;
    void setBusinessConnection(const OAIBusinessConnection &business_connection);
    bool is_business_connection_Set() const;
    bool is_business_connection_Valid() const;

    OAIMessage getBusinessMessage() const;
    void setBusinessMessage(const OAIMessage &business_message);
    bool is_business_message_Set() const;
    bool is_business_message_Valid() const;

    OAIMessage getEditedBusinessMessage() const;
    void setEditedBusinessMessage(const OAIMessage &edited_business_message);
    bool is_edited_business_message_Set() const;
    bool is_edited_business_message_Valid() const;

    OAIBusinessMessagesDeleted getDeletedBusinessMessages() const;
    void setDeletedBusinessMessages(const OAIBusinessMessagesDeleted &deleted_business_messages);
    bool is_deleted_business_messages_Set() const;
    bool is_deleted_business_messages_Valid() const;

    OAIMessageReactionUpdated getMessageReaction() const;
    void setMessageReaction(const OAIMessageReactionUpdated &message_reaction);
    bool is_message_reaction_Set() const;
    bool is_message_reaction_Valid() const;

    OAIMessageReactionCountUpdated getMessageReactionCount() const;
    void setMessageReactionCount(const OAIMessageReactionCountUpdated &message_reaction_count);
    bool is_message_reaction_count_Set() const;
    bool is_message_reaction_count_Valid() const;

    OAIInlineQuery getInlineQuery() const;
    void setInlineQuery(const OAIInlineQuery &inline_query);
    bool is_inline_query_Set() const;
    bool is_inline_query_Valid() const;

    OAIChosenInlineResult getChosenInlineResult() const;
    void setChosenInlineResult(const OAIChosenInlineResult &chosen_inline_result);
    bool is_chosen_inline_result_Set() const;
    bool is_chosen_inline_result_Valid() const;

    OAICallbackQuery getCallbackQuery() const;
    void setCallbackQuery(const OAICallbackQuery &callback_query);
    bool is_callback_query_Set() const;
    bool is_callback_query_Valid() const;

    OAIShippingQuery getShippingQuery() const;
    void setShippingQuery(const OAIShippingQuery &shipping_query);
    bool is_shipping_query_Set() const;
    bool is_shipping_query_Valid() const;

    OAIPreCheckoutQuery getPreCheckoutQuery() const;
    void setPreCheckoutQuery(const OAIPreCheckoutQuery &pre_checkout_query);
    bool is_pre_checkout_query_Set() const;
    bool is_pre_checkout_query_Valid() const;

    OAIPaidMediaPurchased getPurchasedPaidMedia() const;
    void setPurchasedPaidMedia(const OAIPaidMediaPurchased &purchased_paid_media);
    bool is_purchased_paid_media_Set() const;
    bool is_purchased_paid_media_Valid() const;

    OAIPoll getPoll() const;
    void setPoll(const OAIPoll &poll);
    bool is_poll_Set() const;
    bool is_poll_Valid() const;

    OAIPollAnswer getPollAnswer() const;
    void setPollAnswer(const OAIPollAnswer &poll_answer);
    bool is_poll_answer_Set() const;
    bool is_poll_answer_Valid() const;

    OAIChatMemberUpdated getMyChatMember() const;
    void setMyChatMember(const OAIChatMemberUpdated &my_chat_member);
    bool is_my_chat_member_Set() const;
    bool is_my_chat_member_Valid() const;

    OAIChatMemberUpdated getChatMember() const;
    void setChatMember(const OAIChatMemberUpdated &chat_member);
    bool is_chat_member_Set() const;
    bool is_chat_member_Valid() const;

    OAIChatJoinRequest getChatJoinRequest() const;
    void setChatJoinRequest(const OAIChatJoinRequest &chat_join_request);
    bool is_chat_join_request_Set() const;
    bool is_chat_join_request_Valid() const;

    OAIChatBoostUpdated getChatBoost() const;
    void setChatBoost(const OAIChatBoostUpdated &chat_boost);
    bool is_chat_boost_Set() const;
    bool is_chat_boost_Valid() const;

    OAIChatBoostRemoved getRemovedChatBoost() const;
    void setRemovedChatBoost(const OAIChatBoostRemoved &removed_chat_boost);
    bool is_removed_chat_boost_Set() const;
    bool is_removed_chat_boost_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_update_id;
    bool m_update_id_isSet;
    bool m_update_id_isValid;

    OAIMessage m_message;
    bool m_message_isSet;
    bool m_message_isValid;

    OAIMessage m_edited_message;
    bool m_edited_message_isSet;
    bool m_edited_message_isValid;

    OAIMessage m_channel_post;
    bool m_channel_post_isSet;
    bool m_channel_post_isValid;

    OAIMessage m_edited_channel_post;
    bool m_edited_channel_post_isSet;
    bool m_edited_channel_post_isValid;

    OAIBusinessConnection m_business_connection;
    bool m_business_connection_isSet;
    bool m_business_connection_isValid;

    OAIMessage m_business_message;
    bool m_business_message_isSet;
    bool m_business_message_isValid;

    OAIMessage m_edited_business_message;
    bool m_edited_business_message_isSet;
    bool m_edited_business_message_isValid;

    OAIBusinessMessagesDeleted m_deleted_business_messages;
    bool m_deleted_business_messages_isSet;
    bool m_deleted_business_messages_isValid;

    OAIMessageReactionUpdated m_message_reaction;
    bool m_message_reaction_isSet;
    bool m_message_reaction_isValid;

    OAIMessageReactionCountUpdated m_message_reaction_count;
    bool m_message_reaction_count_isSet;
    bool m_message_reaction_count_isValid;

    OAIInlineQuery m_inline_query;
    bool m_inline_query_isSet;
    bool m_inline_query_isValid;

    OAIChosenInlineResult m_chosen_inline_result;
    bool m_chosen_inline_result_isSet;
    bool m_chosen_inline_result_isValid;

    OAICallbackQuery m_callback_query;
    bool m_callback_query_isSet;
    bool m_callback_query_isValid;

    OAIShippingQuery m_shipping_query;
    bool m_shipping_query_isSet;
    bool m_shipping_query_isValid;

    OAIPreCheckoutQuery m_pre_checkout_query;
    bool m_pre_checkout_query_isSet;
    bool m_pre_checkout_query_isValid;

    OAIPaidMediaPurchased m_purchased_paid_media;
    bool m_purchased_paid_media_isSet;
    bool m_purchased_paid_media_isValid;

    OAIPoll m_poll;
    bool m_poll_isSet;
    bool m_poll_isValid;

    OAIPollAnswer m_poll_answer;
    bool m_poll_answer_isSet;
    bool m_poll_answer_isValid;

    OAIChatMemberUpdated m_my_chat_member;
    bool m_my_chat_member_isSet;
    bool m_my_chat_member_isValid;

    OAIChatMemberUpdated m_chat_member;
    bool m_chat_member_isSet;
    bool m_chat_member_isValid;

    OAIChatJoinRequest m_chat_join_request;
    bool m_chat_join_request_isSet;
    bool m_chat_join_request_isValid;

    OAIChatBoostUpdated m_chat_boost;
    bool m_chat_boost_isSet;
    bool m_chat_boost_isValid;

    OAIChatBoostRemoved m_removed_chat_boost;
    bool m_removed_chat_boost_isSet;
    bool m_removed_chat_boost_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIUpdate)

#endif // OAIUpdate_H
