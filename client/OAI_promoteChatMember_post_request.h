/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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
 * OAI_promoteChatMember_post_request.h
 *
 * 
 */

#ifndef OAI_promoteChatMember_post_request_H
#define OAI_promoteChatMember_post_request_H

#include <QJsonObject>

#include "OAI_sendMessage_post_request_chat_id.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAI_promoteChatMember_post_request : public OAIObject {
public:
    OAI_promoteChatMember_post_request();
    OAI_promoteChatMember_post_request(QString json);
    ~OAI_promoteChatMember_post_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAI_sendMessage_post_request_chat_id getChatId() const;
    void setChatId(const OAI_sendMessage_post_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    bool isIsAnonymous() const;
    void setIsAnonymous(const bool &is_anonymous);
    bool is_is_anonymous_Set() const;
    bool is_is_anonymous_Valid() const;

    bool isCanManageChat() const;
    void setCanManageChat(const bool &can_manage_chat);
    bool is_can_manage_chat_Set() const;
    bool is_can_manage_chat_Valid() const;

    bool isCanDeleteMessages() const;
    void setCanDeleteMessages(const bool &can_delete_messages);
    bool is_can_delete_messages_Set() const;
    bool is_can_delete_messages_Valid() const;

    bool isCanManageVideoChats() const;
    void setCanManageVideoChats(const bool &can_manage_video_chats);
    bool is_can_manage_video_chats_Set() const;
    bool is_can_manage_video_chats_Valid() const;

    bool isCanRestrictMembers() const;
    void setCanRestrictMembers(const bool &can_restrict_members);
    bool is_can_restrict_members_Set() const;
    bool is_can_restrict_members_Valid() const;

    bool isCanPromoteMembers() const;
    void setCanPromoteMembers(const bool &can_promote_members);
    bool is_can_promote_members_Set() const;
    bool is_can_promote_members_Valid() const;

    bool isCanChangeInfo() const;
    void setCanChangeInfo(const bool &can_change_info);
    bool is_can_change_info_Set() const;
    bool is_can_change_info_Valid() const;

    bool isCanInviteUsers() const;
    void setCanInviteUsers(const bool &can_invite_users);
    bool is_can_invite_users_Set() const;
    bool is_can_invite_users_Valid() const;

    bool isCanPostStories() const;
    void setCanPostStories(const bool &can_post_stories);
    bool is_can_post_stories_Set() const;
    bool is_can_post_stories_Valid() const;

    bool isCanEditStories() const;
    void setCanEditStories(const bool &can_edit_stories);
    bool is_can_edit_stories_Set() const;
    bool is_can_edit_stories_Valid() const;

    bool isCanDeleteStories() const;
    void setCanDeleteStories(const bool &can_delete_stories);
    bool is_can_delete_stories_Set() const;
    bool is_can_delete_stories_Valid() const;

    bool isCanPostMessages() const;
    void setCanPostMessages(const bool &can_post_messages);
    bool is_can_post_messages_Set() const;
    bool is_can_post_messages_Valid() const;

    bool isCanEditMessages() const;
    void setCanEditMessages(const bool &can_edit_messages);
    bool is_can_edit_messages_Set() const;
    bool is_can_edit_messages_Valid() const;

    bool isCanPinMessages() const;
    void setCanPinMessages(const bool &can_pin_messages);
    bool is_can_pin_messages_Set() const;
    bool is_can_pin_messages_Valid() const;

    bool isCanManageTopics() const;
    void setCanManageTopics(const bool &can_manage_topics);
    bool is_can_manage_topics_Set() const;
    bool is_can_manage_topics_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAI_sendMessage_post_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    bool m_is_anonymous;
    bool m_is_anonymous_isSet;
    bool m_is_anonymous_isValid;

    bool m_can_manage_chat;
    bool m_can_manage_chat_isSet;
    bool m_can_manage_chat_isValid;

    bool m_can_delete_messages;
    bool m_can_delete_messages_isSet;
    bool m_can_delete_messages_isValid;

    bool m_can_manage_video_chats;
    bool m_can_manage_video_chats_isSet;
    bool m_can_manage_video_chats_isValid;

    bool m_can_restrict_members;
    bool m_can_restrict_members_isSet;
    bool m_can_restrict_members_isValid;

    bool m_can_promote_members;
    bool m_can_promote_members_isSet;
    bool m_can_promote_members_isValid;

    bool m_can_change_info;
    bool m_can_change_info_isSet;
    bool m_can_change_info_isValid;

    bool m_can_invite_users;
    bool m_can_invite_users_isSet;
    bool m_can_invite_users_isValid;

    bool m_can_post_stories;
    bool m_can_post_stories_isSet;
    bool m_can_post_stories_isValid;

    bool m_can_edit_stories;
    bool m_can_edit_stories_isSet;
    bool m_can_edit_stories_isValid;

    bool m_can_delete_stories;
    bool m_can_delete_stories_isSet;
    bool m_can_delete_stories_isValid;

    bool m_can_post_messages;
    bool m_can_post_messages_isSet;
    bool m_can_post_messages_isValid;

    bool m_can_edit_messages;
    bool m_can_edit_messages_isSet;
    bool m_can_edit_messages_isValid;

    bool m_can_pin_messages;
    bool m_can_pin_messages_isSet;
    bool m_can_pin_messages_isValid;

    bool m_can_manage_topics;
    bool m_can_manage_topics_isSet;
    bool m_can_manage_topics_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAI_promoteChatMember_post_request)

#endif // OAI_promoteChatMember_post_request_H
