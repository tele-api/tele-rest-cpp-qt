/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIKeyboardButtonRequestChat.h
 *
 * This object defines the criteria used to request a suitable chat. Information about the selected chat will be shared with the bot when the corresponding button is pressed. The bot will be granted requested rights in the chat if appropriate. [More about requesting chats »](https://core.telegram.org/bots/features#chat-and-user-selection).
 */

#ifndef OAIKeyboardButtonRequestChat_H
#define OAIKeyboardButtonRequestChat_H

#include <QJsonObject>

#include "OAIChatAdministratorRights.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIChatAdministratorRights;

class OAIKeyboardButtonRequestChat : public OAIObject {
public:
    OAIKeyboardButtonRequestChat();
    OAIKeyboardButtonRequestChat(QString json);
    ~OAIKeyboardButtonRequestChat() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getRequestId() const;
    void setRequestId(const qint32 &request_id);
    bool is_request_id_Set() const;
    bool is_request_id_Valid() const;

    bool isChatIsChannel() const;
    void setChatIsChannel(const bool &chat_is_channel);
    bool is_chat_is_channel_Set() const;
    bool is_chat_is_channel_Valid() const;

    bool isChatIsForum() const;
    void setChatIsForum(const bool &chat_is_forum);
    bool is_chat_is_forum_Set() const;
    bool is_chat_is_forum_Valid() const;

    bool isChatHasUsername() const;
    void setChatHasUsername(const bool &chat_has_username);
    bool is_chat_has_username_Set() const;
    bool is_chat_has_username_Valid() const;

    bool isChatIsCreated() const;
    void setChatIsCreated(const bool &chat_is_created);
    bool is_chat_is_created_Set() const;
    bool is_chat_is_created_Valid() const;

    OAIChatAdministratorRights getUserAdministratorRights() const;
    void setUserAdministratorRights(const OAIChatAdministratorRights &user_administrator_rights);
    bool is_user_administrator_rights_Set() const;
    bool is_user_administrator_rights_Valid() const;

    OAIChatAdministratorRights getBotAdministratorRights() const;
    void setBotAdministratorRights(const OAIChatAdministratorRights &bot_administrator_rights);
    bool is_bot_administrator_rights_Set() const;
    bool is_bot_administrator_rights_Valid() const;

    bool isBotIsMember() const;
    void setBotIsMember(const bool &bot_is_member);
    bool is_bot_is_member_Set() const;
    bool is_bot_is_member_Valid() const;

    bool isRequestTitle() const;
    void setRequestTitle(const bool &request_title);
    bool is_request_title_Set() const;
    bool is_request_title_Valid() const;

    bool isRequestUsername() const;
    void setRequestUsername(const bool &request_username);
    bool is_request_username_Set() const;
    bool is_request_username_Valid() const;

    bool isRequestPhoto() const;
    void setRequestPhoto(const bool &request_photo);
    bool is_request_photo_Set() const;
    bool is_request_photo_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_request_id;
    bool m_request_id_isSet;
    bool m_request_id_isValid;

    bool m_chat_is_channel;
    bool m_chat_is_channel_isSet;
    bool m_chat_is_channel_isValid;

    bool m_chat_is_forum;
    bool m_chat_is_forum_isSet;
    bool m_chat_is_forum_isValid;

    bool m_chat_has_username;
    bool m_chat_has_username_isSet;
    bool m_chat_has_username_isValid;

    bool m_chat_is_created;
    bool m_chat_is_created_isSet;
    bool m_chat_is_created_isValid;

    OAIChatAdministratorRights m_user_administrator_rights;
    bool m_user_administrator_rights_isSet;
    bool m_user_administrator_rights_isValid;

    OAIChatAdministratorRights m_bot_administrator_rights;
    bool m_bot_administrator_rights_isSet;
    bool m_bot_administrator_rights_isValid;

    bool m_bot_is_member;
    bool m_bot_is_member_isSet;
    bool m_bot_is_member_isValid;

    bool m_request_title;
    bool m_request_title_isSet;
    bool m_request_title_isValid;

    bool m_request_username;
    bool m_request_username_isSet;
    bool m_request_username_isValid;

    bool m_request_photo;
    bool m_request_photo_isSet;
    bool m_request_photo_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIKeyboardButtonRequestChat)

#endif // OAIKeyboardButtonRequestChat_H
