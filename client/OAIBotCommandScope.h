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
 * OAIBotCommandScope.h
 *
 * This object represents the scope to which bot commands are applied. Currently, the following 7 scopes are supported:  * [BotCommandScopeDefault](https://core.telegram.org/bots/api/#botcommandscopedefault) * [BotCommandScopeAllPrivateChats](https://core.telegram.org/bots/api/#botcommandscopeallprivatechats) * [BotCommandScopeAllGroupChats](https://core.telegram.org/bots/api/#botcommandscopeallgroupchats) * [BotCommandScopeAllChatAdministrators](https://core.telegram.org/bots/api/#botcommandscopeallchatadministrators) * [BotCommandScopeChat](https://core.telegram.org/bots/api/#botcommandscopechat) * [BotCommandScopeChatAdministrators](https://core.telegram.org/bots/api/#botcommandscopechatadministrators) * [BotCommandScopeChatMember](https://core.telegram.org/bots/api/#botcommandscopechatmember)
 */

#ifndef OAIBotCommandScope_H
#define OAIBotCommandScope_H

#include <QJsonObject>

#include "OAIBotCommandScopeAllChatAdministrators.h"
#include "OAIBotCommandScopeAllGroupChats.h"
#include "OAIBotCommandScopeAllPrivateChats.h"
#include "OAIBotCommandScopeChat.h"
#include "OAIBotCommandScopeChatAdministrators.h"
#include "OAIBotCommandScopeChatMember.h"
#include "OAIBotCommandScopeDefault.h"
#include "OAI_restrictChatMember_post_request_chat_id.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIBotCommandScope : public OAIObject {
public:
    OAIBotCommandScope();
    OAIBotCommandScope(QString json);
    ~OAIBotCommandScope() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAI_restrictChatMember_post_request_chat_id getChatId() const;
    void setChatId(const OAI_restrictChatMember_post_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAI_restrictChatMember_post_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIBotCommandScope)

#endif // OAIBotCommandScope_H
