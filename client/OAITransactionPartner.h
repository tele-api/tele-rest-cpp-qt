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
 * OAITransactionPartner.h
 *
 * This object describes the source of a transaction, or its recipient for outgoing transactions. Currently, it can be one of  * [TransactionPartnerUser](https://core.telegram.org/bots/api/#transactionpartneruser) * [TransactionPartnerChat](https://core.telegram.org/bots/api/#transactionpartnerchat) * [TransactionPartnerAffiliateProgram](https://core.telegram.org/bots/api/#transactionpartneraffiliateprogram) * [TransactionPartnerFragment](https://core.telegram.org/bots/api/#transactionpartnerfragment) * [TransactionPartnerTelegramAds](https://core.telegram.org/bots/api/#transactionpartnertelegramads) * [TransactionPartnerTelegramApi](https://core.telegram.org/bots/api/#transactionpartnertelegramapi) * [TransactionPartnerOther](https://core.telegram.org/bots/api/#transactionpartnerother)
 */

#ifndef OAITransactionPartner_H
#define OAITransactionPartner_H

#include <QJsonObject>

#include "OAIAffiliateInfo.h"
#include "OAIChat.h"
#include "OAIGift.h"
#include "OAIPaidMedia.h"
#include "OAIRevenueWithdrawalState.h"
#include "OAITransactionPartnerAffiliateProgram.h"
#include "OAITransactionPartnerChat.h"
#include "OAITransactionPartnerFragment.h"
#include "OAITransactionPartnerOther.h"
#include "OAITransactionPartnerTelegramAds.h"
#include "OAITransactionPartnerTelegramApi.h"
#include "OAITransactionPartnerUser.h"
#include "OAIUser.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;
class OAIChat;
class OAIAffiliateInfo;
class OAIPaidMedia;
class OAIGift;
class OAIRevenueWithdrawalState;

class OAITransactionPartner : public OAIObject {
public:
    OAITransactionPartner();
    OAITransactionPartner(QString json);
    ~OAITransactionPartner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getTransactionType() const;
    void setTransactionType(const QString &transaction_type);
    bool is_transaction_type_Set() const;
    bool is_transaction_type_Valid() const;

    OAIUser getUser() const;
    void setUser(const OAIUser &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    qint32 getCommissionPerMille() const;
    void setCommissionPerMille(const qint32 &commission_per_mille);
    bool is_commission_per_mille_Set() const;
    bool is_commission_per_mille_Valid() const;

    qint32 getRequestCount() const;
    void setRequestCount(const qint32 &request_count);
    bool is_request_count_Set() const;
    bool is_request_count_Valid() const;

    OAIAffiliateInfo getAffiliate() const;
    void setAffiliate(const OAIAffiliateInfo &affiliate);
    bool is_affiliate_Set() const;
    bool is_affiliate_Valid() const;

    QString getInvoicePayload() const;
    void setInvoicePayload(const QString &invoice_payload);
    bool is_invoice_payload_Set() const;
    bool is_invoice_payload_Valid() const;

    qint32 getSubscriptionPeriod() const;
    void setSubscriptionPeriod(const qint32 &subscription_period);
    bool is_subscription_period_Set() const;
    bool is_subscription_period_Valid() const;

    QList<OAIPaidMedia> getPaidMedia() const;
    void setPaidMedia(const QList<OAIPaidMedia> &paid_media);
    bool is_paid_media_Set() const;
    bool is_paid_media_Valid() const;

    QString getPaidMediaPayload() const;
    void setPaidMediaPayload(const QString &paid_media_payload);
    bool is_paid_media_payload_Set() const;
    bool is_paid_media_payload_Valid() const;

    OAIGift getGift() const;
    void setGift(const OAIGift &gift);
    bool is_gift_Set() const;
    bool is_gift_Valid() const;

    qint32 getPremiumSubscriptionDuration() const;
    void setPremiumSubscriptionDuration(const qint32 &premium_subscription_duration);
    bool is_premium_subscription_duration_Set() const;
    bool is_premium_subscription_duration_Valid() const;

    OAIUser getSponsorUser() const;
    void setSponsorUser(const OAIUser &sponsor_user);
    bool is_sponsor_user_Set() const;
    bool is_sponsor_user_Valid() const;

    OAIRevenueWithdrawalState getWithdrawalState() const;
    void setWithdrawalState(const OAIRevenueWithdrawalState &withdrawal_state);
    bool is_withdrawal_state_Set() const;
    bool is_withdrawal_state_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_transaction_type;
    bool m_transaction_type_isSet;
    bool m_transaction_type_isValid;

    OAIUser m_user;
    bool m_user_isSet;
    bool m_user_isValid;

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    qint32 m_commission_per_mille;
    bool m_commission_per_mille_isSet;
    bool m_commission_per_mille_isValid;

    qint32 m_request_count;
    bool m_request_count_isSet;
    bool m_request_count_isValid;

    OAIAffiliateInfo m_affiliate;
    bool m_affiliate_isSet;
    bool m_affiliate_isValid;

    QString m_invoice_payload;
    bool m_invoice_payload_isSet;
    bool m_invoice_payload_isValid;

    qint32 m_subscription_period;
    bool m_subscription_period_isSet;
    bool m_subscription_period_isValid;

    QList<OAIPaidMedia> m_paid_media;
    bool m_paid_media_isSet;
    bool m_paid_media_isValid;

    QString m_paid_media_payload;
    bool m_paid_media_payload_isSet;
    bool m_paid_media_payload_isValid;

    OAIGift m_gift;
    bool m_gift_isSet;
    bool m_gift_isValid;

    qint32 m_premium_subscription_duration;
    bool m_premium_subscription_duration_isSet;
    bool m_premium_subscription_duration_isValid;

    OAIUser m_sponsor_user;
    bool m_sponsor_user_isSet;
    bool m_sponsor_user_isValid;

    OAIRevenueWithdrawalState m_withdrawal_state;
    bool m_withdrawal_state_isSet;
    bool m_withdrawal_state_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAITransactionPartner)

#endif // OAITransactionPartner_H
